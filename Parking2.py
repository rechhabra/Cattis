for i in range(int(input())):
  input()
  amn = sorted(list(map(int, input().split(" "))))
  amnt = 0
  for j in range(len(amn)-1):
    amnt+=amn[j+1]*2-amn[j]*2
  print(amnt)
