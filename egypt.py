a,b,c = sorted(list(map(int, input().split(" "))))
while (not a==b==c==0):
  print("right" if c*c==a*a+b*b else "wrong")
  a,b,c = sorted(list(map(int, input().split(" "))))
