import strutils
import intsets

var freqset = initIntSet()
freqset.incl(0)

# Read the list for frequencies.
var total = 0

for x in 0..1000:
    for line in "data".lines:
        total += line.parseInt()
        if total in freqset:
            echo total
            quit()

        else:
            freqset.incl(total)


echo "nothing found"



