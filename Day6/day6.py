from collections import *
import itertools
import random
import sys
from math import ceil


def solve(s):
    values = s    
    states = set()
    count = 0
    cont = True
    while cont is True:
        print(values.index(max(values)))
        print(values)
        start_value = int(values[values.index(max(values))])
        print(start_value)
        shares_for_each = ceil(start_value / len(values))
        shares_avail = int(values[values.index(max(values))])
        print(values[1])
        while shares_avail > shares_for_each:   
            values[(start_value + 1) % int(len(values))] += shares_for_each
            shares_avail -= shares_for_each
        values[start_value] += shares_avail
        count += 1
        if states.add(values) is False:
            cont = False

    return count


def main():
    s = input()
    print(solve(s))
main()