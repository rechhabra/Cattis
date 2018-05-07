#Reshab Chhabra
#Time: 0.02s
from itertools import combinations
W,L = map(int, input().split())
vals = [0,W]+[int(x) for x in input().split()]
ans = set()
ans.add(0)
combos = combinations(vals,2)
for group in combos:
  ans.add(abs(group[0]-W))
  ans.add(abs(group[0]-0))
  ans.add(abs(group[0]-group[1]))
print(*sorted(list(ans))[1:])
