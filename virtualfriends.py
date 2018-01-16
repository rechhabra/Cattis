def find(i):
  if i not in ppl:
    ppl[i] = i
    ind[i] = 1
  if i == ppl[i]:
    return i
  else:
    ppl[i] = find(ppl[i])
    return ppl[i]
def union(x, y):
  a = find(x)
  b = find(y)
  if a != b:
    ppl[a] = b
    ind[a] = ind[a]+ind[b]
    ind[b] = ind[a]
  return ind[a]
ppl = {}
ind = {}
tc = int(input())
for _ in range(tc):
  num = int(input())
  ppl.clear()
  ind.clear()
  for ___ in range(num):
    x, y = input().split()
    print(union(x,y))
