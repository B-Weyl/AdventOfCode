import strutils
import sequtils
import hashes
import math
import sets




var two_count, three_count = 0
for line in "day2.in".lines:
    var isTwo, isThree = false
    for letter in line:
        if line.count(letter) == 2:
            istwo = true
        if line.count(letter) == 3:
            isThree = true
    if istwo:
        two_count += 1
    if isThree:
        three_count += 1
echo two_count * three_count

