from collections import defaultdict
# Step Q must be finished before step O can begin.
s = open('small.in').readlines()

# W, Z, Q, C ---> C
vals1 = []
vals2 = []
# d = defaultdict(str)
d = dict()

# we know C is first
# and then A
# CABDFE

for line in s:
    data = line.split()
    val1, val2 = data[1], data[7]
    if val1 not in d:
        d[val1] = [val2]
    else:
        d[val1].append(val2)
    vals1.append(val1)
    vals2.append(val2)
    curr_val = list(set(vals1) - set(vals2))[0]  # C

ans = []
ans.append(curr_val)  # add that to our answer, find next value
# starting value of C
for i in range(15):
    x = min(d[curr_val])
    ans.append(x)  # A
    curr_val = x
    print(curr_val)
    print(ans)
    print(d.items())