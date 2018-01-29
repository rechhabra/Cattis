d = {}
import fileinput
for line in fileinput.input():
  a = line[:1]
  if a == 'd':
    r,b,c = line.split()
    if c not in d:
      d[c]=int(b)
    else:
      d[c]=int(b)
  elif a == 'e':
    r,b,c,e = line.split()
    if b not in d:
      print("undefined")
      continue
    elif e not in d:
      print("undefined")
      continue
    X = d[b]
    Y = d[e]
    if c == "<":
      print("true" if X<Y else "false")
    elif c == ">":
      print("true" if X>Y else "false")
    else:
      print("true" if X==Y else "false")
