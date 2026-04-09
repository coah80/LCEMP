# Find and decompile 4J functions by matching string references in the game executable
# @category Decompilation
# @runtime Jython

import os
from ghidra.app.decompiler import DecompInterface, DecompileOptions
from ghidra.util.task import ConsoleTaskMonitor
from ghidra.program.model.data import StringDataType

args = getScriptArgs()
output_dir = args[0] if len(args) > 0 else "/tmp/ghidra_4j_output"

if not os.path.exists(output_dir):
    os.makedirs(output_dir)

monitor = ConsoleTaskMonitor()
decomp = DecompInterface()
options = DecompileOptions()
options.setMaxPayloadMBytes(120)
decomp.setOptions(options)
decomp.openProgram(currentProgram)

# Strategy: find string references that we know come from 4J code,
# trace back to the functions that reference them, decompile those functions

listing = currentProgram.getListing()
memory = currentProgram.getMemory()
refMgr = currentProgram.getReferenceManager()
fm = currentProgram.getFunctionManager()

# Known strings from 4J code
target_strings = [
    "StorageManager", "InputManager", "ProfileManager",
    "4J_SEED", "4J_HOSTOPTIONS", "4J_TEXTUREPACK",
    "(4J)", "Iggy", "iggy",
    "CMinecraftApp", "DLCProcess",
    "Joypad", "Deadzone", "SouthPaw",
    "SaveGame", "SaveData", "DoesSaveExist",
    "Achievement", "RichPresence", "Gamertag",
    "GDraw", "gdraw", "iggytex",
]

# Find all defined strings and match
print("Scanning for string references...")
string_refs = {}  # addr -> string
data_iter = listing.getDefinedData(True)
str_count = 0
while data_iter.hasNext() and not monitor.isCancelled():
    d = data_iter.next()
    if d.hasStringValue():
        val = d.getValue()
        if val and isinstance(val, (str, unicode)):
            for ts in target_strings:
                if ts.lower() in val.lower():
                    string_refs[d.getAddress()] = val
                    str_count += 1
                    break

print("Found {} matching strings".format(str_count))

# Find functions that reference these strings
target_funcs = set()
for str_addr, str_val in string_refs.items():
    refs = refMgr.getReferencesTo(str_addr)
    for ref in refs:
        func = fm.getFunctionContaining(ref.getFromAddress())
        if func:
            target_funcs.add(func)

# Also get all functions called BY these functions (1 level deep)
callee_funcs = set()
for func in target_funcs:
    body = func.getBody()
    for addr_range in body:
        addr = addr_range.getMinAddress()
        while addr is not None and addr.compareTo(addr_range.getMaxAddress()) <= 0:
            refs = refMgr.getReferencesFrom(addr)
            for ref in refs:
                if ref.getReferenceType().isCall():
                    callee = fm.getFunctionContaining(ref.getToAddress())
                    if callee:
                        callee_funcs.add(callee)
            addr = addr.next()

all_funcs = target_funcs | callee_funcs
print("Found {} functions ({} direct + {} callees)".format(
    len(all_funcs), len(target_funcs), len(callee_funcs)))

# Decompile all found functions
results_map = {}
count = 0
for func in sorted(all_funcs, key=lambda f: str(f.getEntryPoint())):
    if monitor.isCancelled():
        break
    result = decomp.decompileFunction(func, 120, monitor)
    if result and result.decompileCompleted():
        code = result.getDecompiledFunction()
        if code:
            results_map[func] = code.getC()
            count += 1

# Write output
out_path = os.path.join(output_dir, "4J_all_decompiled.c")
with open(out_path, "w") as f:
    f.write("// Decompiled 4J-related functions from {}\n".format(currentProgram.getName()))
    f.write("// Functions found via string cross-references\n")
    f.write("// Total: {} functions decompiled\n\n".format(count))
    
    for func in sorted(results_map.keys(), key=lambda f: str(f.getEntryPoint())):
        f.write("// ===== {} @ {} =====\n".format(func.getName(), func.getEntryPoint()))
        f.write(results_map[func])
        f.write("\n\n")

print("Wrote {} decompiled functions to {}".format(count, out_path))

# Also write a function index
idx_path = os.path.join(output_dir, "4J_function_index.txt")
with open(idx_path, "w") as f:
    f.write("4J Function Index\n")
    f.write("=================\n\n")
    f.write("Direct string-referencing functions ({}):\n".format(len(target_funcs)))
    for func in sorted(target_funcs, key=lambda f: str(f.getEntryPoint())):
        f.write("  {} @ {}\n".format(func.getName(), func.getEntryPoint()))
    f.write("\nCallee functions ({}):\n".format(len(callee_funcs)))
    for func in sorted(callee_funcs, key=lambda f: str(f.getEntryPoint())):
        f.write("  {} @ {}\n".format(func.getName(), func.getEntryPoint()))

print("Wrote function index to {}".format(idx_path))
