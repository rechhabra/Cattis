tc = int(input())
pos=sorted([int(input()) for i in range(tc)])
amnt=0
for i in range(len(pos)):
  if i%3==len(pos)%3:
    continue
  amnt+=pos[i]
print(amnt)
