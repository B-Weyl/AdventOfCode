import sys


def solve(s):
    start = 0
    seen = set()
    for x in range(1000):
        for line in s:
            # print(start)
            if line[0] == '+':
                start += int(line[1:])
            else:
                start -= int(line[1:])
            if start not in seen:
                seen.add(start)
            else:
                return start
        # uncomment for part 1
        # return start


def main():
    s = sys.stdin.readlines()
    print(solve(s))


main()
