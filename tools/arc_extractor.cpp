/*
 * ARC Archive Extractor for LCEMP
 *
 * Extracts files from .arc archive format used by Minecraft Legacy Console Edition.
 * Archive format:
 *   [int32be fileCount]
 *   [entries: uint16be nameLen, utf8 name, int32be offset, int32be size]
 *   [file data...]
 * Files with names prefixed by '*' are zlib-compressed.
 *
 * Usage: arc_extractor <archive.arc> [output_dir]
 *
 * Build: g++ -std=c++17 -O2 -o arc_extractor arc_extractor.cpp -lz
 *        cl /EHsc /O2 arc_extractor.cpp /link zlib.lib
 */

#include <cstdio>
#include <cstdint>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>
#include <fstream>
#include <filesystem>
#include <zlib.h>

namespace fs = std::filesystem;

static uint16_t readU16BE(FILE *f) {
    uint8_t buf[2];
    fread(buf, 1, 2, f);
    return (uint16_t)((buf[0] << 8) | buf[1]);
}

static int32_t readI32BE(FILE *f) {
    uint8_t buf[4];
    fread(buf, 1, 4, f);
    return (int32_t)((buf[0] << 24) | (buf[1] << 16) | (buf[2] << 8) | buf[3]);
}

static uint32_t readU32BE(const uint8_t *p) {
    return (uint32_t)((p[0] << 24) | (p[1] << 16) | (p[2] << 8) | p[3]);
}

// Read Java-style modified UTF-8 string
static std::string readUTF(FILE *f) {
    uint16_t len = readU16BE(f);
    std::string result;
    result.resize(len);
    fread(result.data(), 1, len, f);
    return result;
}

struct ArcEntry {
    std::string name;
    int32_t offset;
    int32_t size;
    bool compressed;
};

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <archive.arc> [output_dir]\n", argv[0]);
        return 1;
    }

    const char *arcPath = argv[1];
    std::string outDir = (argc >= 3) ? argv[2] : "extracted";

    FILE *f = fopen(arcPath, "rb");
    if (!f) {
        fprintf(stderr, "Error: Cannot open '%s'\n", arcPath);
        return 1;
    }

    // Get total file size
    fseek(f, 0, SEEK_END);
    long totalSize = ftell(f);
    fseek(f, 0, SEEK_SET);

    // Read entire file into memory
    std::vector<uint8_t> fileData(totalSize);
    fread(fileData.data(), 1, totalSize, f);
    fclose(f);

    // Parse from memory — reopen as memory stream via fmemopen or manual parse
    size_t pos = 0;
    auto readU16 = [&]() -> uint16_t {
        uint16_t v = (uint16_t)((fileData[pos] << 8) | fileData[pos + 1]);
        pos += 2;
        return v;
    };
    auto readI32 = [&]() -> int32_t {
        int32_t v = (int32_t)((fileData[pos] << 24) | (fileData[pos + 1] << 16) | (fileData[pos + 2] << 8) | fileData[pos + 3]);
        pos += 4;
        return v;
    };
    auto readStr = [&]() -> std::string {
        uint16_t len = readU16();
        std::string s((const char *)&fileData[pos], len);
        pos += len;
        return s;
    };

    int32_t fileCount = readI32();
    printf("Archive: %s\n", arcPath);
    printf("Files: %d\n\n", fileCount);

    std::vector<ArcEntry> entries;
    entries.reserve(fileCount);

    for (int i = 0; i < fileCount; i++) {
        ArcEntry e;
        e.name = readStr();
        e.offset = readI32();
        e.size = readI32();
        e.compressed = false;

        if (!e.name.empty() && e.name[0] == '*') {
            e.name = e.name.substr(1);
            e.compressed = true;
        }

        entries.push_back(e);
    }

    // Create output directory
    fs::create_directories(outDir);

    int extracted = 0;
    int errors = 0;

    for (const auto &e : entries) {
        printf("[%c] %-50s  offset=0x%08X  size=%d",
               e.compressed ? 'C' : ' ', e.name.c_str(), e.offset, e.size);

        if (e.offset < 0 || e.offset + e.size > (int32_t)fileData.size()) {
            printf("  ERROR: out of bounds\n");
            errors++;
            continue;
        }

        // Create subdirectories if name contains path separators
        fs::path outPath = fs::path(outDir) / e.name;
        fs::create_directories(outPath.parent_path());

        const uint8_t *data = &fileData[e.offset];
        int dataSize = e.size;

        std::vector<uint8_t> decompressed;
        if (e.compressed) {
            // First 4 bytes of compressed data = big-endian decompressed size
            if (dataSize < 4) {
                printf("  ERROR: compressed but too small\n");
                errors++;
                continue;
            }
            uint32_t decompSize = readU32BE(data);
            decompressed.resize(decompSize);

            uLongf destLen = decompSize;
            int ret = uncompress(decompressed.data(), &destLen, data + 4, dataSize - 4);
            if (ret != Z_OK) {
                printf("  ERROR: zlib decompress failed (ret=%d)\n", ret);
                errors++;
                continue;
            }
            data = decompressed.data();
            dataSize = (int)destLen;
            printf("  -> %d bytes", dataSize);
        }

        // Write to file
        FILE *out = fopen(outPath.string().c_str(), "wb");
        if (!out) {
            printf("  ERROR: cannot write\n");
            errors++;
            continue;
        }
        fwrite(data, 1, dataSize, out);
        fclose(out);

        printf("  OK\n");
        extracted++;
    }

    printf("\nDone: %d extracted, %d errors out of %d files\n", extracted, errors, fileCount);
    return errors > 0 ? 1 : 0;
}
