import sys
from difflib import SequenceMatcher
from fuzzywuzzy import fuzz


def solve(s):
    twos = 0
    threes = 0
    for line in s:
        line = str(line)
        add_twos = False
        add_threes = False
        for letter in line:
            if line.count(letter) == 2:
                add_twos = True
            if line.count(letter) == 3:
                add_threes = True
        if add_threes:
            threes += 1
        if add_twos:
            twos += 1
    return twos * threes


def solve2(s):
    items = []
    for line in s:
        items.append(line)
    # print(items)
    combs = [(items[i], items[j]) for i in range(len(items))
             for j in range(i + 1, len(items))]
    # print(combs)
    for x, y in combs:
        if fuzz.ratio(x, y) > 95:
            print(fuzz.ratio(x, y))
            print(x, y)


def main():
    s = sys.stdin.readlines()
    print(solve2(s))


main()