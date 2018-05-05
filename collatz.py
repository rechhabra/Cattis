#Reshab Chhabra
#Time : 0.29s
a = input()
def conj(n):
  if n%2==0:
    return n//2;
  return n*3 + 1
while a !="0 0":
  x,y = map(int, a.split(" "))
  A,Aa = list(),set()
  A.append(x)
  Aa.add(x)
  B,Bb = list(),set()
  B.append(y)
  Bb.add(y)
  while len(Aa & Bb)==0:
    if x!=1:
      x=conj(x)
      A.append(x)
      Aa.add(x)
    if y!=1:
      y=conj(y)
      B.append(y)
      Bb.add(y)
    if x==y==1: break
  C = a.split(' ')
  v = int(list(Aa&Bb)[0])
  indA = A.index(v)
  indB = B.index(v)
  print(C[0]+" needs "+str(indA)+" steps, "+C[1]+" needs "+str(indB)+" steps, they meet at "+str(v))
  a = input()
