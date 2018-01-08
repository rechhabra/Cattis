import sys
names = []
numFirst = {}
for line in sys.stdin.readlines():
  f,l = line.split()
  if f not in numFirst.keys():
    numFirst[f]=0
  numFirst[f]+=1
  names.append([f,l])
for first,last in sorted(names,key=lambda x: x[1]+x[0]):
  if numFirst[first]>1:
    print(first,last)
  else:
    print(first)
