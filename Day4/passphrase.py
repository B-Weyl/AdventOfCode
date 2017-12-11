from collections import *
import itertools
import random
import sys
import math


def solve(s):
    total = 0
    for line in s:
        line = line.strip('\n')
        if len(line.split(' ')) == len(set(line.split(' '))):
            total += 1
    return total


def main():
    s = sys.stdin.readlines()
    print(solve(s))
main()