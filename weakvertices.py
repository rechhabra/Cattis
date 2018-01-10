while (True):
  n = int(input())
  if n==-1: break
  ind = 0
  vals = set()
  board = [[]*n for _ in range(n)]
  for i in range(n):
    board[i]=list(map(int, input().split()))
  for i in range(n):
    for j in range(n):
      for k in range(n):
        if board[i][j]+board[i][k]+board[j][k]>2:
          vals.add(i)
  ans = [0]*n;
  for val in vals:
    ans[val]+=1
  gg = ""
  for i in range(len(ans)):
    if ans[i]==0:
      gg+=str(i)+" "
      #print(i,end=" ")
  print(gg[:len(gg)-1])
