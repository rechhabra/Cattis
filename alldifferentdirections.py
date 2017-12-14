from math import sin
from math import cos
from math import pi
a = input()
def computeDistance(x1,x2,y1,y2):
  return ((x2-x1)**2+(y2-y1)**2)**0.5
while a!="0":
  tc = int(a)
  distances = []
  for i in range(tc):
    directions = input().split(" ")
    pos = [float(directions[0]),float(directions[1])]
    angle = float(directions[3])
    for j in range(4,len(directions),2):
      if directions[j]=="turn":
        angle=(angle+float(directions[j+1]))%360
      if directions[j]=="walk":
        pos[0]+=cos(angle*pi/180)*float(directions[j+1])
        pos[1]+=sin(angle*pi/180)*float(directions[j+1])
    distances.append(pos)
  avgX = sum([distances[i][0] for i in range(len(distances))])/len(distances)
  avgY = sum([distances[i][1] for i in range(len(distances))])/len(distances)
  worstDist = -1
  for oP in distances:
    worstDist = max(worstDist,computeDistance(oP[0],avgX,oP[1],avgY))
  print(str(avgX)+" "+str(avgY)+" "+str(worstDist))
  a = input()
