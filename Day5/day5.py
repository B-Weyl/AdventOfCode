from collections import *
import itertools
import random
import sys
import math


def solve(s):
    moves = 0
    values = [int(value.strip()) for value in s]
    curr_index = 0
    escape_index = len(values)  # 5
    while curr_index < escape_index:
        move_value = values[curr_index]  # 0
        # move the index the value at starting value
        # if curr_index != 0:
        #     curr_index += move_value - 1
        # else:
        #     curr_index += move_value
        
        # print(values, curr_index)
        # increment the value at that index
        if curr_index >= escape_index:
            break
        if values[curr_index] >= 3:
            values[curr_index] += -1
        else:
            values[curr_index] += 1
        moves += 1
        curr_index += move_value
    return moves


def main():
    s = sys.stdin.readlines()
    print(solve(s))
main()