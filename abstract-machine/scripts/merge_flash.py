#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import argparse
import os
import sys


def parse_int(x):
    return int(x, 0)


def main():
    parser = argparse.ArgumentParser(
        description="Merge bootloader.bin and packed app.img into one flash image."
    )
    parser.add_argument("bootloader_bin", help="bootloader raw binary")
    parser.add_argument("app_img", help="packed app image (header + raw binary)")
    parser.add_argument("out_bin", help="merged flash image output")

    # 兼容你当前 Makefile 的写法
    parser.add_argument("--memtest-offset", type=parse_int, default=None,
                        help="app image offset in flash (compatible old option name)")
    parser.add_argument("--app-offset", type=parse_int, default=None,
                        help="app image offset in flash")
    parser.add_argument("--fill", type=parse_int, default=0xFF,
                        help="fill byte for unused flash space, default: 0xFF")
    parser.add_argument("--flash-size", type=parse_int, default=None,
                        help="optional fixed flash image size")
    parser.add_argument("--allow-overlap", action="store_true",
                        help="allow app image overlap bootloader (not recommended)")
    args = parser.parse_args()

    bootloader_path = os.path.abspath(args.bootloader_bin)
    app_img_path = os.path.abspath(args.app_img)
    out_path = os.path.abspath(args.out_bin)

    if not os.path.isfile(bootloader_path):
        print(f"[ERROR] bootloader bin not found: {bootloader_path}", file=sys.stderr)
        sys.exit(1)
    if not os.path.isfile(app_img_path):
        print(f"[ERROR] app img not found: {app_img_path}", file=sys.stderr)
        sys.exit(1)

    app_offset = args.app_offset
    if app_offset is None:
        app_offset = args.memtest_offset
    if app_offset is None:
        app_offset = 0x10000

    if app_offset < 0:
        print("[ERROR] app offset must be >= 0", file=sys.stderr)
        sys.exit(1)

    fill_byte = args.fill & 0xFF

    with open(bootloader_path, "rb") as f:
        boot = f.read()

    with open(app_img_path, "rb") as f:
        app = f.read()

    if len(boot) == 0:
        print("[ERROR] bootloader bin is empty", file=sys.stderr)
        sys.exit(1)
    if len(app) == 0:
        print("[ERROR] app img is empty", file=sys.stderr)
        sys.exit(1)

    if (not args.allow_overlap) and len(boot) > app_offset:
        print(
            f"[ERROR] bootloader size 0x{len(boot):X} exceeds app offset 0x{app_offset:X}. "
            f"Increase APP_FLASH_OFFSET or shrink bootloader.",
            file=sys.stderr,
        )
        sys.exit(1)

    total_size = max(len(boot), app_offset + len(app))
    if args.flash_size is not None:
        if args.flash_size < total_size:
            print(
                f"[ERROR] --flash-size 0x{args.flash_size:X} is smaller than required 0x{total_size:X}",
                file=sys.stderr,
            )
            sys.exit(1)
        total_size = args.flash_size

    image = bytearray([fill_byte] * total_size)

    # bootloader 放在 flash 起始
    image[0:len(boot)] = boot

    # app image 放在指定 offset
    image[app_offset:app_offset + len(app)] = app

    os.makedirs(os.path.dirname(out_path), exist_ok=True)
    with open(out_path, "wb") as f:
        f.write(image)

    print(f"[MERGE] generated: {out_path}")
    print(f"  bootloader @ 0x00000000, size = 0x{len(boot):08X}")
    print(f"  app image  @ 0x{app_offset:08X}, size = 0x{len(app):08X}")
    print(f"  total size = 0x{len(image):08X}")
    print(f"  fill byte  = 0x{fill_byte:02X}")


if __name__ == "__main__":
    main()