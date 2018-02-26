from collections import defaultdict
vals = defaultdict(set)
amnt = defaultdict(int)
tc = int(input())
for _ in range(tc):
  line = input()
  line = line.split()
  for i in line[1:]:
    vals[line[0]].add(i)
    amnt[i] = amnt.get(i, 0)+1
allvals = set()
for guy in vals:
  allvals.update(vals[guy])
for guy in vals:
  allvals.intersection_update(vals[guy])
if len(allvals) == 0:
  print("ALL CLEAR")
else:
  for i in sorted([[amnt[i], i] for i in allvals], key=lambda x:(-x[0], x[1])):
    print(i[1])
