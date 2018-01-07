tc = int(input())
for _ in range(tc):
  l = int(input())
  a = sorted(list(map(int, input().split(" "))))
  b = sorted(list(map(int, input().split(" "))))[::-1]
  print("Case","#"+str(_+1)+":",sum(a[i]*b[i] for i in range(l)))
