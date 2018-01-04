from decimal import Decimal
tc = int(input())
runners = []
for i in range(tc):
  name,l1,l2= input().split()
  l1=float(l1)
  l2=float(l2)
  runners.append([name,l1,l2])
minTime = float(500001)
names = ""
for i in range(len(runners)):
  time = float(0)
  fakeR = runners[0:i]+runners[i+1:]
  fastestL1 = runners[i]
  time+=fastestL1[1]
  fastestL3 = sorted(fakeR,key=lambda x: x[2])
  for i in range(3):
    time+=fastestL3[i][2]
  if time<minTime:
    minTime=time
    names=fastestL1[0]+"\n"+fastestL3[0][0]+"\n"+fastestL3[1][0]+"\n"+fastestL3[2][0]
print(Decimal(minTime).quantize(Decimal("0.00001")))
print(names)
