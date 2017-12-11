from collections import *
import itertools
import random
import sys
from math import ceil
import re


def solve(s):
    numbers = re.sub('[\t+]', ' ', s)
    numbers = numbers.split(' ')
    new_numbs = []
    for numb in numbers:
        new_numbs.append(int(numb))
    print(new_numbs)
    states = set()
    count = 0
    cont = True
    while cont:
        start_value = new_numbs.index(max(new_numbs))
        shares_avail = new_numbs[new_numbs.index(max(new_numbs))]
        shares_for_each = ceil(shares_avail / len(new_numbs))
        new_numbs[start_value] = 0
        x = 1
        # while shares_avail >= shares_for_each:
        #     new_numbs[(start_value + x) % len(new_numbs)] += shares_for_each
        #     shares_avail -= shares_for_each
        #     x += 1
        while shares_avail > 0:
            new_numbs[(start_value + x) % len(new_numbs)] += 1
            x += 1
            shares_avail -= 1
        new_numbs[start_value] += shares_avail
        new_numbs_tup = tuple(new_numbs)
        if new_numbs_tup not in states:
            states.add(new_numbs_tup)
            count += 1
        else:
            cont = False
            count += 1
            break
        
        # print(states, count)
    print(len(states))
    return count


def main():
    s = input()
    print(solve(s))
main()