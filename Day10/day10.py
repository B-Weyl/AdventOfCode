from collections import *
import itertools
import random
import sys


def main():
    sizes = list(map(int, input().split(',')))
    the_list = list(range(256))
    skip_size = 0
    current_index = 0
    for value in sizes:
        new_list = the_list[current_index:] + the_list[:current_index]
        new_list = list(reversed(new_list[:value])) + new_list[value:]
        the_list = new_list[-current_index:] + new_list[:-current_index]
        current_index = current_index + value + skip_size
        current_index %= len(the_list)
        skip_size += 1
    print(new_list)
    print(the_list[0] * the_list[1])

main()