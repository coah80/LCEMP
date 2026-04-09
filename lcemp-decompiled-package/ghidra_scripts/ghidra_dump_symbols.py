# Dump all function names to find 4J patterns
# @category Analysis
# @runtime Jython

import os

args = getScriptArgs()
output_path = args[0] if len(args) > 0 else "/tmp/ghidra_symbols.txt"

fm = currentProgram.getFunctionManager()
funcs = fm.getFunctions(True)

with open(output_path, "w") as f:
    count = 0
    for func in funcs:
        name = func.getName()
        addr = str(func.getEntryPoint())
        f.write("{}\t0x{}\n".format(name, addr))
        count += 1

print("Dumped {} function names to {}".format(count, output_path))
