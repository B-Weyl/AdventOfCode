import sys


def main():
    the_list = [int(x) for x in range(256)]
    s = input()
    begin = the_list[0]
    skip_size = 0
    current_position = 0
    for value in s.split(','):
        if int(value) + current_position > len(the_list):
            selection = the_list[current_position:-1] + the_list[current_position % len(the_list)]
        selection = the_list[current_position:int(value)]
        selection = selection[::-1]
        the_list = selection + the_list[int(value) + 1:-1]
        current_position = (len(selection) + skip_size) % len(the_list)
        skip_size += 1
        print(the_list)


main()
