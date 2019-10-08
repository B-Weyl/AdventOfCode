import sys
import numpy as np
from collections import defaultdict

# ['#1327', '@', '127,459:', '22x19']

C = defaultdict(int)


def solve(s):
    answer = 0
    for line in s:
        data = line.split()
        # print(data)
        id = data[0]
        x, y = data[2].split(',')
        w, h = data[3].split('x')
        x, y = int(x), int(y[:-1])
        w, h = int(w), int(h)
        for dx in range(w):
            for dy in range(h):
                C[(x + dx, y + dy)] += 1

    for line in s:
        data = line.split()
        # print(data)
        id = data[0]
        x, y = data[2].split(',')
        w, h = data[3].split('x')
        x, y = int(x), int(y[:-1])
        w, h = int(w), int(h)
        ok = True
        for dx in range(w):
            for dy in range(h):
                if C[(x + dx, y + dy)] > 1:
                    ok = False
        if ok:
            print(data[0])

    for (r, c), v in C.items():
        if v >= 2:
            answer += 1
    print(answer)


def main():
    s = sys.stdin.readlines()
    print(solve(s))


main()