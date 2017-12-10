#Very sloppy RIP
def oper(array):
  pair = [0,0]
  deg = 90
  for op in array:
    if op =="Left":
      deg=(deg+90)%360
    elif op=="Right":
      deg=(deg-90)%360
    else:
      whereToGo = list(map(int, direction[str(deg)].split(" ")))
      pair[0]+=whereToGo[0]
      pair[1]+=whereToGo[1]
  return pair[0]==orderedPair[0] and pair[1]==orderedPair[1]
direction = {"0":"1 0","90":"0 1", "180":"-1 0","270":"0 -1"}
orderedPair = list(map(int, input().split(" ")))
tc = int(input())
moves = []
for i in range(tc):
  moves.append(input())
pos = ["Forward","Right","Left"]
perm = []
real = []
for i in range(tc):
  for j in range(3):
    perm[:]=[]
    for movement in moves:
      perm.append(movement)
    perm[i]=pos[j]
    if oper(perm):
      for i in range(tc):
        real.append(perm[i])
for i in range(tc):
  if moves[i]!=real[i]:
    print(str(i+1)+" "+real[i])
    break
