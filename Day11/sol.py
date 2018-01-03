import sys
import numpy as np


def solve(s):
    # se = np.array((1, 0, -1)) 1, -1, 0
    # sw = np.array((0, 1, -1)) -1, 0, 1
    # s = np.array((-1, 1, 0)) 0, -1, 1
    # nw = np.array((-1, 0, 1)) -1, 1, 0
    # ne = np.array((0, -1, 1)) 1, 0, -1
    # n = np.array((1, -1, 0)) 0, 1, -1
    # DIRS = np.array([nw, ne, n, se, sw, s])
    # START = np.array([0, 0, 0])
    to_add = [0, 0, 0]
    HOME = [0, 0, 0]
    start = [0, 0, 0]
    steps = s.split(',')
    distances = []
    for step in steps:
        if step == 'nw':
            to_add = [-1, 1, 0]
        if step == 'n':
            to_add = [0, 1, -1]
        if step == 'sw':
            to_add = [-1, 0, 1]
        if step == 's':
            to_add = [0, -1, 1]
        if step == 'ne':
            to_add = [1, 0, -1]
        if step == 'se':
            to_add = [1, -1, 0]
        start = np.array(start)
        to_add = np.array(to_add)
        HOME = np.array(HOME)
        start += to_add
        # start = [x + y for x, y in zip(start, to_add)]
        distance = np.sum(np.abs(HOME - start) / 2)
        distances.append(distance)
    print(max(distances))
    print(start)


def main():
    s = input()
    print(solve(s))
main()