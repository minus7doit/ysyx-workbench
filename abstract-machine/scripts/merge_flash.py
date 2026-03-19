#!/usr/bin/env python3
import argparse
import os
import struct
import subprocess
import sys

MEMTEST_MAGIC = 0x4D544553  # "MTES"

def load_symbols(elf_path, nm_tool):
    out = subprocess.check_output([nm_tool, "-n", elf_path], text=True)
    syms = {}
    for line in out.splitlines():
        parts = line.strip().split()
        if len(parts) >= 3:
            addr_str = parts[0]
            name = parts[2]
            try:
                addr = int(addr_str, 16)
            except ValueError:
                continue
            syms[name] = addr
    return syms

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("elf", help="memtest.elf")
    parser.add_argument("bin", help="memtest.bin")
    parser.add_argument("out", help="memtest.img")
    parser.add_argument("--nm", default=os.environ.get("NM", "riscv64-unknown-elf-nm"))
    args = parser.parse_args()

    syms = load_symbols(args.elf, args.nm)

    required = [
        "_image_start",
        "_start",
        "_bss_start",
        "_bss_end",
        "_stack_top",
    ]
    for k in required:
        if k not in syms:
            print(f"missing symbol: {k}", file=sys.stderr)
            sys.exit(1)

    with open(args.bin, "rb") as f:
        bin_data = f.read()

    load_addr = syms["_image_start"] & 0xFFFFFFFF
    entry_addr = syms["_start"] & 0xFFFFFFFF
    image_size = len(bin_data) & 0xFFFFFFFF
    bss_start = syms["_bss_start"] & 0xFFFFFFFF
    bss_size = (syms["_bss_end"] - syms["_bss_start"]) & 0xFFFFFFFF
    stack_top = syms["_stack_top"] & 0xFFFFFFFF

    hdr = struct.pack(
        "<7I",
        MEMTEST_MAGIC,
        load_addr,
        entry_addr,
        image_size,
        bss_start,
        bss_size,
        stack_top,
    )

    with open(args.out, "wb") as f:
        f.write(hdr)
        f.write(bin_data)

    print("generated:", args.out)
    print(f"  load_addr  = 0x{load_addr:08X}")
    print(f"  entry_addr = 0x{entry_addr:08X}")
    print(f"  image_size = 0x{image_size:08X}")
    print(f"  bss_start  = 0x{bss_start:08X}")
    print(f"  bss_size   = 0x{bss_size:08X}")
    print(f"  stack_top  = 0x{stack_top:08X}")

if __name__ == "__main__":
    main()