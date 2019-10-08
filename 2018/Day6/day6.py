import sys
import numpy as np


def solve(s):
    highest = 0
    values = []
    for line in s:
        x, y = line.split(',')
        values.append(int(x))
        values.append(int(y))
    highest = max(values)
    # we need to create a highest + 1 x highest + 1 sized grid
    # a = [[0 for i in range(highest) for j in range(highest)]]
    a = np.zeros((highest, highest))
    for line in s:
        x = int(line.split(',')[0]) - 1
        y = int(line.split(',')[1]) - 1
        a[x][y] = 1

    print(a[87][58])


def main():
    s = sys.stdin.readlines()
    print(solve(s))


main()
