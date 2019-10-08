import strutils
import sequtils

var ids = toseq("day2.in".lines)

let idmaxidx = ids[0].high

proc search(ids: seq[string]): string =
    for idx1 in 0..(ids.high - 1):
        var id1 = ids[idx1]

        for idx2 in (idx1 + 1)..ids.high:
            let id2 = ids[idx2]
            var diffidx = -1

            for i in 0..idmaxidx:
                if id1[i] != id2[i]:
                    if diffidx >= 0:
                        diffidx = -1
                        break
                    diffidx = 1
            if diffidx >= 0:
                id1.delete(diffidx, diffidx)
                return id1
echo ids.search()
