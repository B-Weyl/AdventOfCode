from collections import *
import itertools
import random
from functools import reduce
import sys


def to_hex(c):
    out = hex(c)[2:]
    if len(out) == 1:
        return '0' + out
    else:
        return out


def main():
    # sizes = list(map(int, input().split(',')))
    the_list = list(range(256))
    skip_size = 0
    junk = list(map(int, '17, 31, 73, 47, 23'.split(',')))
    sizes = [ord(c) for c in input().strip()]
    current_index = 0
    sizes += junk
    for _ in range(64):
        for value in sizes:
            new_list = the_list[current_index:] + the_list[:current_index]
            new_list = list(reversed(new_list[:value])) + new_list[value:]
            the_list = new_list[-current_index:] + new_list[:-current_index]
            current_index = current_index + value + skip_size
            current_index %= len(the_list)
            skip_size += 1

    out = []
    for i in range(0, 256, 16):
        block = the_list[i:i + 16]
        val = reduce(lambda x, y: x ^ y, block)
        out.append(to_hex(val))

    print(''.join(out))

    # print(new_list)
    # print(the_list[0] * the_list[1])

main()