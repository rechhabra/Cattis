tc = int(input())
for i in range(tc):
  l = input()
  i = l.find("simon says ")
  print(l[11:] if i==0 else "")
