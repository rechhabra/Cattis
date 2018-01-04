from math import pi
tc = int(input())
for i in range(tc):
  splash = []
  amnt = int(input())
  for j in range(amnt):
    x,y,r,color = input().split()
    splash.append([float(x),float(y),(float(r)/pi)**0.5,color])
  amnt = int(input())
  splash=splash[::-1]
  for j in range(amnt):
    x,y = map(float, input().split())
    didP = 1
    for item in splash:
      if ((item[0]-x)*(item[0]-x)+(item[1]-y)*(item[1]-y))**0.5<=item[2]:
        print(item[3])
        didP=0
        break;
    if (didP):
      print("white")
