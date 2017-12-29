import fileinput
file = fileinput.input()
for line in file:
  M,P,L,E,R,S,N=map(int, line.split(" "))
  stg=[L,P,M]
  for i in range(N):
    fakeP=stg[0]//(R if R else 0)
    fakeE=stg[2]*E
    fakeA=stg[1]//(S if S else 0)
    stg[0]=fakeE
    stg[2]=fakeA
    stg[1]=fakeP
  print(stg[2])
