r,m,c = map(float, input().split(" "))
while r!=0 and m!=0 and c!=0:
  print(str(3.1415926535*r**2)+" "+str(c/m*4*r**2))
  r,m,c = map(float, input().split(" "))
