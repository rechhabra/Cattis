tc = int(input())
cups={}
for i in range(tc):
  a,b = input().split(" ")
  if a<b:
    num=int(a)/2
    cups[num]=b
  else:
    num = int(b)
    cups[num]=a
for cup in sorted(cups.keys()):
  print(cups.get(cup))
