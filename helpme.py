def prioritize(t,key):
  add,m,k="",9,9
  if ord(key[0])>90:
    add="9"
  elif key[0]=='K':
    add="1"
  elif key[0]=='Q':
    add="2"
  elif key[0]=='R':
    add="3"
  elif key[0]=='B':
    add="4"
  else:
    add='5'
  if t=="black":
    k=8-int(key[len(key)-1])
  else:
    k=int(key[len(key)-1])
  if add=="9":
    m=int(ord(key[0])-ord('a'))
  else:
    m=int(ord(key[1])-ord('a'))
  return add+str(k)+str(m)
white = []
black = []
fboard=[]
for i in range(16):
  fboard.append(input())
r = 0
for i in range(15,0,-2):
  amnt = 0
  for j in range(2,len(fboard[i]),4):
    if fboard[i][j]!='.' and fboard[i][j]!=':':
      key = fboard[i][j].upper()
      if fboard[i][j].lower()=='p': key=""
      if ord(fboard[i][j])<=90:
        white.append(key+chr(ord('a')+amnt)+str(r+1))
      else:
        black.append(key+chr(ord('a')+amnt)+str(r+1))
    amnt+=1
  r+=1
print("White: "+','.join(sorted(white, key=lambda x:prioritize("white",x))))
print("Black: "+','.join(sorted(black, key=lambda x:prioritize("black",x))))
