whites = []
blacks = []
w = input()[7:].split(',')
if w[0]!="":
  for key in w:
    if len(key)==3:
      whites.append([key[0].upper(),-1+int(key[2]),int(ord(key[1])-ord('a'))])
    else:
      whites.append(["P",int(key[1])-1,int(ord(key[0])-ord('a'))])
b = input()[7:].split(',')
if b[0]!="":
  for key in b:
    if len(key)==3:
      blacks.append([key[0].lower(),int(key[2])-1,int(ord(key[1])-ord('a'))])
    else:
      blacks.append(["p",int(key[1])-1,int(ord(key[0])-ord('a'))])
print("+---+---+---+---+---+---+---+---+")
for r in range(7,-1,-1):
  print("|",end="")
  for c in range(8):
    dot = ":"
    if (r+c)%2==1: dot="."
    print(dot,end="")
    lol = ""
    for key in whites:
      if key[1]==r and key[2]==c:
        lol = key[0]
        break
    if len(lol)==0:
      for key in blacks:
        if key[1]==r and key[2]==c:
          lol=key[0]
          break
    if len(lol)>0:
      print(lol,end="")
    else:
      print(dot,end="")
    print(dot+"|",end="")
  print("\n+---+---+---+---+---+---+---+---+")
