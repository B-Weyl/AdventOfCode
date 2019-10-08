import strutils
import sequtils

let input = readFile("/Users/bweyl/Documents/PythonCoding/AdventOfCode/2018/Day2/day2.in").splitLines


func sameLetters(line1, line2: string): string =
    for c1, c2 in zip(line1, line2).items:
        if c1 == c2:
            result.add c1

func second(input: seq[string]): string =
    for i, line1 in input:
        for line2 in input[i+1 .. input.high]:
            var differences: int
            for c1, c2 in zip(line1, line2).items:
                if c1 != c2:
                    inc differences
            if differences == 1:
                return sameLetters(line1, line2)

echo second(input)