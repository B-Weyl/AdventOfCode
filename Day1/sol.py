from collections import *
import itertools
import random
import sys


def solve(s):
    ans = 0
    n = len(s)
    for i in range(n - 1):
        if s[i] == s[i + 1]:
            ans += ord(s[i]) - ord('0')

    if s[-1] == s[0]:
        ans += ord(s[-1]) - ord('0')

    return ans


def main():
    s = input()
    print(solve(s))
main()