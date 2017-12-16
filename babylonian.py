a = int(input())
for i in range(a):
  oper = input().split(",")[::-1]
  amnt=0
  for j in range(len(oper)):
    if oper[j]!="":
      amnt+=int(oper[j])*(60)**j
  print(amnt)
