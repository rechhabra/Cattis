board = [
"qwertyuiop",
"asdfghjkl",
"zxcvbnm",
]
pos = {}
for a, x in enumerate(board):
  for b, y in enumerate(x):
    pos[y] = (a,b)
tc = int(input())
def compute(a,b):
  amnt = 0
  for i,j in zip(a,b):
    A=pos[i]
    B=pos[j]
    amnt+=abs(A[0]-B[0])+abs(A[1]-B[1])
  return amnt
for i in range(tc):
  wd=[]
  word, amnt = input().split()
  for j in range(int(amnt)):
    test = input()
    wd.append([compute(test,word),test])
  wd=sorted(wd)#,key=lambda x: x[1])
  for v,k in wd:
    print(k,v)
