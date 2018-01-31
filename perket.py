from itertools import combinations
tc = int(input())
vals = []
amnt = 100000000001
for _ in range(tc):
  x,y = map(int, input().split())
  vals.append([x,y])
for _ in range(1,tc+1):
  for terms in combinations(vals,_):
    tS = 1
    tB = 0
    for term in terms:
      tS*=term[0]
      tB+=term[1]
    amnt = min(amnt,abs(tS-tB))
print(amnt)
