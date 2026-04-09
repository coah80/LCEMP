# Decompile ALL functions in the game executable and write them to organized files
# @category Decompilation
# @runtime Jython

import os
from ghidra.app.decompiler import DecompInterface, DecompileOptions
from ghidra.util.task import ConsoleTaskMonitor

args = getScriptArgs()
output_dir = args[0] if len(args) > 0 else "/tmp/ghidra_full"

if not os.path.exists(output_dir):
    os.makedirs(output_dir)

monitor = ConsoleTaskMonitor()
decomp = DecompInterface()
options = DecompileOptions()
options.setMaxPayloadMBytes(120)
decomp.setOptions(options)
decomp.openProgram(currentProgram)

fm = currentProgram.getFunctionManager()
listing = currentProgram.getListing()
refMgr = currentProgram.getReferenceManager()

# First, categorize by address range clusters
# Find string-referencing functions to identify 4J code ranges
target_strings_storage = ["SaveGame", "SaveData", "DLC", "TMS", "Storage", "Save", "Load",
                          "Container", "Quota", "Mount", "Unmount", "DoesSaveExist"]
target_strings_input = ["Joypad", "Deadzone", "XInput", "Gamepad", "ButtonDown", 
                        "Stick", "Trigger", "Rumble", "ForceFeedback"]
target_strings_profile = ["Achievement", "Award", "Profile", "Gamertag", "SignIn",
                          "RichPresence", "GamerPic", "License", "Trial"]
target_strings_ui = ["Iggy", "iggy", "GDraw", "gdraw", "Flash", "SWF", "swf",
                     "UIScene", "UIControl", "font", "bitmap"]
target_strings_render = ["Render", "Shader", "Texture", "Viewport", "BlendState",
                         "DepthStencil", "Vertex", "D3D", "d3d"]

all_targets = {
    "storage": target_strings_storage,
    "input": target_strings_input,
    "profile": target_strings_profile,
    "ui": target_strings_ui,
    "render": target_strings_render,
}

# Scan all defined strings
print("Scanning all strings...")
string_to_category = {}
data_iter = listing.getDefinedData(True)
while data_iter.hasNext() and not monitor.isCancelled():
    d = data_iter.next()
    if d.hasStringValue():
        val = d.getValue()
        if val and isinstance(val, (str, unicode)):
            for cat, patterns in all_targets.items():
                for p in patterns:
                    if p.lower() in val.lower():
                        string_to_category[d.getAddress()] = cat
                        break

print("Found {} categorized strings".format(len(string_to_category)))

# Map functions to categories based on string refs
func_categories = {}
for str_addr, cat in string_to_category.items():
    refs = refMgr.getReferencesTo(str_addr)
    for ref in refs:
        func = fm.getFunctionContaining(ref.getFromAddress())
        if func:
            entry = str(func.getEntryPoint())
            if entry not in func_categories:
                func_categories[entry] = set()
            func_categories[entry].add(cat)

# Expand with callees (1 level deep)
expanded = {}
for entry, cats in func_categories.items():
    if "EXTERNAL" in entry:
        continue
    try:
        addr = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(long(entry, 16))
    except:
        continue
    func = fm.getFunctionAt(addr)
    if func:
        expanded[entry] = cats
        called = func.getCalledFunctions(monitor)
        for callee in called:
            callee_entry = str(callee.getEntryPoint())
            if "EXTERNAL" in callee_entry:
                continue
            if callee_entry not in expanded:
                expanded[callee_entry] = set()
            expanded[callee_entry].update(cats)

print("Total categorized functions: {} (with callees)".format(len(expanded)))

# Decompile each category
category_code = {"storage": [], "input": [], "profile": [], "ui": [], "render": [], "other": []}

for entry, cats in sorted(expanded.items()):
    if monitor.isCancelled():
        break
    if "EXTERNAL" in entry:
        continue
    try:
        addr = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(long(entry, 16))
    except:
        continue
    func = fm.getFunctionAt(addr)
    if not func:
        continue
    
    result = decomp.decompileFunction(func, 60, monitor)
    if result and result.decompileCompleted():
        code = result.getDecompiledFunction()
        if code:
            c_code = code.getC()
            primary_cat = sorted(cats)[0] if cats else "other"
            category_code[primary_cat].append({
                "name": func.getName(),
                "addr": entry,
                "code": c_code,
                "categories": list(cats)
            })

# Write per-category files
for cat, funcs in category_code.items():
    if funcs:
        out_path = os.path.join(output_dir, "{}_decompiled.c".format(cat))
        with open(out_path, "w") as f:
            f.write("// Category: {} - {} functions\n".format(cat, len(funcs)))
            f.write("// Decompiled from {}\n\n".format(currentProgram.getName()))
            for fn in funcs:
                f.write("// ===== {} @ 0x{} [{}] =====\n".format(
                    fn["name"], fn["addr"], ",".join(fn["categories"])))
                f.write(fn["code"])
                f.write("\n\n")
        print("Wrote {} {} functions to {}".format(len(funcs), cat, out_path))

total = sum(len(v) for v in category_code.values())
print("\nTotal: {} functions decompiled across {} categories".format(
    total, len([v for v in category_code.values() if v])))
