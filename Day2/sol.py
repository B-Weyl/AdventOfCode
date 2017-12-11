from collections import *
import itertools
import random
import sys
import math
import re


def solve(s):
    print(s)
    values = [re.sub('[\t\n+]', ' ', line).strip() for line in s]
    new_values = [value.split(' ') for value in values]
    print(new_values)


def main():
    s = sys.stdin.readlines()
    print(solve(s))
main()