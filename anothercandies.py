a = int(input())
for i in range(a):
  skipLine = input()
  amnt = int(input())
  print("YES") if (sum([int(input()) for j in range(amnt)])%amnt==0) else print("NO")
