import fileinput
file = fileinput.input()
for line in file:
  u1,u2,u3,t1,t2 = line.split(" ")
  t1=list(map(int, t1.split(":")))
  t2=list(map(int, t2.split(":")))
  if (t2[1]-t1[1])<0:
    t2[0]-=1
    t2[1]+=60
  print(u1+" "+u2+" "+u3+" "+str(t2[0]-t1[0])+" hours "+str(t2[1]-t1[1])+" minutes")
