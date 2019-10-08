import sys


def main():
    s = input()
    total = 0
    skip = False
    garbage = False
    answer = 0
    x = 0
    for c in s:
        if skip:
            skip = False
            continue
        if c == '!':
            skip = True
            continue
        if garbage and c == '>':
            garbage = False
            continue
        elif garbage:
            x += 1
            continue

        if c == '<':
            garbage = True
            continue

        if c == '{':
            total += 1
            answer += total
            continue
        elif c == '}':
            total -= 1
            continue

    print(answer)
    print(x)

main()