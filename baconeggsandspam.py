tc = int(input())
while tc!=0:
  indP={}
  for i in range(tc):
    line = input()
    name = line[0:line.find(" ")]
    for key in line.split(" ")[1:]:
      if key in indP:
        indP[key].append(name)
      else:
        indP[key]=[name]
  for key in sorted(indP.keys()):
    stuff=""
    for name in sorted(indP[key]):
      stuff+=name+" "
    print(key+" "+stuff[0:len(stuff)-1])
  print()
  tc=int(input())
