names = {}
line = input()
while (line!="***"):
  if line in names: names[line]+=1
  else: names[line]=1
  line=input()
names = sorted(names.items(), key=lambda x: (x[1],x[0]))[::-1]
vs = [[name,value] for name,value in names[:2]]
print("Runoff!" if vs[0][1]==vs[1][1] else vs[0][0])
