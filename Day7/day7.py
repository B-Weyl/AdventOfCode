from collections import *
import itertools
import random
import sys
from math import ceil
import re


def solve(s):
    supports = []
    anchors = []
    other_values = []

    for line in s:
        new_line = line.strip().split()
        supports.append(new_line[0])
        if len(line.strip().split()) > 2:
            anchors.append(new_line[0])
            other_values.append(new_line[3:])

    x = list(itertools.chain.from_iterable(other_values))
    # print(x)
    for anchor in anchors:
        if anchor not in x:
            if anchor + ',' not in x:
                print(anchor)        
                print(anchor + ',')


def main():
    s = sys.stdin.readlines()
    print(solve(s))
main()
