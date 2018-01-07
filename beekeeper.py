v = ["aa","ee","ii","oo","uu","yy"]
while (True):
  x = int(input())
  if x==0: break
  print(sorted([input() for _ in range(x)],key=lambda x: sum([sum([1 if str(x)[i:i+2] in v else 0 for i in range(len(str(x))-1)]) for u in v]))[::-1][0])
