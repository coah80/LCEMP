# Ghidra headless script to decompile 4J library functions from game executable
# Searches for C_4JInput, C4JStorage, C_4JProfile class methods
# @category Decompilation
# @runtime Jython

import os
from ghidra.app.decompiler import DecompInterface, DecompileOptions
from ghidra.util.task import ConsoleTaskMonitor

args = getScriptArgs()
output_dir = args[0] if len(args) > 0 else "/tmp/ghidra_4j_output"

if not os.path.exists(output_dir):
    os.makedirs(output_dir)

monitor = ConsoleTaskMonitor()
decomp = DecompInterface()
options = DecompileOptions()
decomp.setOptions(options)
decomp.openProgram(currentProgram)

fm = currentProgram.getFunctionManager()
funcs = fm.getFunctions(True)

# Categorize functions by their class
categories = {
    "4J_Input": [],
    "4J_Storage": [],
    "4J_Profile": [],
    "4J_Render": [],
    "4J_Other": [],
    "Iggy": [],
    "Miles": [],
}

total = 0
matched = 0

for func in funcs:
    if monitor.isCancelled():
        break
    total += 1
    name = func.getName()
    
    # Match 4J library functions
    cat = None
    if "C_4JInput" in name or "4JInput" in name or "InputManager" in name:
        cat = "4J_Input"
    elif "C4JStorage" in name or "4JStorage" in name or "StorageManager" in name:
        cat = "4J_Storage"
    elif "C_4JProfile" in name or "4JProfile" in name or "ProfileManager" in name:
        cat = "4J_Profile"
    elif "C4JRender" in name or "4JRender" in name or "RenderManager" in name:
        cat = "4J_Render"
    elif "4J" in name:
        cat = "4J_Other"
    elif "Iggy" in name or "iggy" in name or "GFx" in name:
        cat = "Iggy"
    elif "MSS" in name or "mss" in name or "AIL" in name or "Miles" in name:
        cat = "Miles"
    
    if cat:
        results = decomp.decompileFunction(func, 120, monitor)
        if results and results.decompileCompleted():
            code = results.getDecompiledFunction()
            if code:
                categories[cat].append({
                    "name": name,
                    "addr": str(func.getEntryPoint()),
                    "sig": code.getSignature(),
                    "code": code.getC()
                })
                matched += 1

# Write output files per category
for cat, funcs_list in categories.items():
    if funcs_list:
        out_path = os.path.join(output_dir, cat + "_decompiled.c")
        with open(out_path, "w") as f:
            f.write("// Decompiled {} functions from {}\n".format(cat, currentProgram.getName()))
            f.write("// Total functions in category: {}\n\n".format(len(funcs_list)))
            for fn in funcs_list:
                f.write("// ===== {} @ 0x{} =====\n".format(fn["name"], fn["addr"]))
                f.write(fn["code"])
                f.write("\n\n")
        print("Wrote {} functions to {}".format(len(funcs_list), out_path))

# Also write a summary
summary_path = os.path.join(output_dir, "summary.txt")
with open(summary_path, "w") as f:
    f.write("Decompilation Summary\n")
    f.write("=====================\n")
    f.write("Total functions found: {}\n".format(total))
    f.write("4J/Iggy/Miles functions matched: {}\n\n".format(matched))
    for cat, funcs_list in categories.items():
        if funcs_list:
            f.write("\n{}: {} functions\n".format(cat, len(funcs_list)))
            for fn in funcs_list:
                f.write("  {} @ 0x{}\n".format(fn["name"], fn["addr"]))

print("\nTotal: {} functions scanned, {} matched 4J/Iggy/Miles patterns".format(total, matched))
