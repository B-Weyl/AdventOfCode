import math
from itertools import cycle

def generate_spiral(value):
    moves = [move_right, move_down, move_left, move_up]

    # determine the grid size needed.
    # for a value of 25, a 5 x 5 grid will be needed.
    # example generate a 5 x 5 grid.
    # if value is even, top row has values in decreasing order.
    # if value is odd, bottom row has values in increasing order.
    _moves = cycle(moves)
    n = 1
    pos = 0,0
    times_to_move = 1
    yield n,pos
    while True:
        for _ in range(2):
            move = next(_moves)
            for _ in range(times_to_move):
                if n >= end:
                    return
                pos = move(*pos)
                n += 1
                yield n,pos
        times_to_move += 1

    


print(generate_spiral(40))
