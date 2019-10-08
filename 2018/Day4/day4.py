import sys
from statistics import mode
from collections import Counter
from collections import defaultdict


def put_in_order(s):
    times = []
    for line in s:
        times.append(line)

    a = sorted(times)
    # print(a)
    with open('list.txt', 'w') as out:
        for line in a:
            out.write(line)


# ['[1518-11-22', '23:48]', 'Guard', '#733', 'begins', 'shift\n']
# '[1518-11-23', '00:00]', 'falls', 'asleep\n']
# ['[1518-11-23', '00:12]', 'wakes', 'up\n']

# guard 2851
# part 2 is not 128295
# or minute 45 with guard 2851
# part 2 is not 119835
# or minute 45 with guard 2663

# def most_common(lst):
#     return max(lst, key=lst.count)


def argmax(d):
    best = None
    for k, v in d.items():
        if best is None or v > d[best]:
            best = k
    return best


def solve():
    d = dict()  # guard number and time asleep
    dt = dict()
    CM = defaultdict(int)
    g = dict()  # guard and minute value that they are asleep for
    for j in range(61):
        dt[j] = 0
    with open('list.txt', 'r') as input_file:
        sleep = False
        for line in input_file:
            if 'Guard' in line:
                current_guard = line.split(' ')[3][1:]
                sleep = False
                if current_guard not in d:
                    d[current_guard] = 0
            if 'falls' in line:
                sleep = True
                start = int(line.split(' ')[1][3:-1])
            if 'wakes' in line:
                sleep = False
                end = int(line.split(' ')[1][3:-1])
                d[current_guard] += end - start

                for i in range(start, end):
                    CM[(current_guard, i)] += 1
                    if current_guard not in g:
                        g[current_guard] = [str(i)]
                    else:
                        g[current_guard].append(str(i))

                    dt[i] += 1
        # print(max(d, key=d.get))
        # print(max(dt, key=dt.get))
        # print(max(g, key=g.get))
    # print(g['2663'])
    # print(g['3469'])
    # a = []
    # for k, v in g.items():
    #     a.append(most_common(v))
    # print(most_common(v), k)
    # print(len(g.keys()))
    # print(sorted(a))
    print(argmax(CM))


def main():
    # s = sys.stdin.readlines()
    # print(put_in_order(s))
    print(solve())


main()