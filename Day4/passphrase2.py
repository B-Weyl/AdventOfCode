from collections import *
import itertools
import random
import sys
import math


def solve(s):
    total = 0
    acceptable = set()
    for line in s:
        line = line.strip('\n')
        line = line.split(' ')
        for word in line:
            if word not in acceptable:
                acceptable.add(''.join(sorted(word)))
                print(''.join(sorted(word)))
            if len(acceptable) == len(line):
                total += 1
        # if len(line.split(' ')) == len(set(line.split(' '))):
        #     total += 1
        acceptable.clear()
    return total


def main():
    s = sys.stdin.readlines()
    print(solve(s))
main()