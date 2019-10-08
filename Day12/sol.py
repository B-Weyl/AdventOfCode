import sys
import re


def solve(s):
    count = 0
    relations = []
    d = {}
    
    for line in s:
        new_r = re.sub('[,+]', '', line)
        relations.append(new_r.strip().split(' '))
        print(relations)
        d[relations[0]] = relations[2]
        print(d)


def main():
    s = sys.stdin.readlines()
    print(solve(s))
main()
