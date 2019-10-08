import strutils
import intsets

var total = 0
var changelist: seq[int]
var freqset = initIntSet()
freqset.incl(0)


for line in "day1.in".lines:
    total += line.parseInt()
    changelist.add(line.parseInt())


iterator freqchanges(changelist: seq[int]): int =
    while true:
        for change in changelist:
            yield change

var freq = 0

for change in changelist.freqchanges():
    freq += change
    if freq in freqset:
        break
    freqset.incl(freq)
echo freq
echo total
