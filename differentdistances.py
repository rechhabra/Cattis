given = list(map(float, input().split(" ")))
while len(given)==5:
  x1,y1,x2,y2,p = given
  print(str((abs(x2-x1)**p+abs(y2-y1)**p)**(1/p)))
  given = list(map(float, input().split(" ")))
