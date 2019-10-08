import sys
import string
from collections import *
import itertools
import random


def run(s):
    stack = []
    for c in s:
        popped = False
        if stack:
            bk = stack[-1]
            if (('A' <= bk <= 'Z' and 'a' <= c <= 'z') or
                ('A' <= c <= 'Z'
                 and 'a' <= bk <= 'z')) and bk.lower() == c.lower():
                stack.pop()
                popped = True
        if not popped:
            stack.append(c)
    return len(stack)


def main():
    s = input().strip()
    ans = 100000
    for k in range(26):
        up = chr(ord('A') + k)
        down = chr(ord('a') + k)
        t = str(s)
        t = t.replace(up, '')
        t = t.replace(down, '')
        print(t)
        ans = min(ans, run(t))
    print(ans)


main()