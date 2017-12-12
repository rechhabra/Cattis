a = int(input())
for i in range(a):
  b = input().split("+")
  print(int(b[0])+int(b[1])) if b[0]!="P=NP" else print("skipped")
