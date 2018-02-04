from math import cos,sin,pi,sqrt
tc = int(input())
for _ in range(tc):
  n = int(input())
  x = 0
  y = 0
  deg = 90
  for __ in range(n):
    DIR,DO = input().split()
    DO = float(DO)
    if DIR == "fd":
      x+=DO*sin(deg*pi/180)
      y+=DO*cos(deg*pi/180)
    if DIR == "bk":
      x-=DO*sin(deg*pi/180)
      y-=DO*cos(deg*pi/180)
    elif DIR == "lt":
      deg = (deg+DO)%3601
    elif DIR == "rt":
      deg = (deg-DO)%360
  print(round(sqrt(x*x+y*y)))
