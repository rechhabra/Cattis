import fileinput
file = fileinput.input()
for line in file:
  l = line.split(" ")
  s_l = sorted(l)
  name = ""
  amnt = 0
  if l[0][0]<l[len(l)-1][0]:
    index = len(l)-1
    while ord(l[index][0])>64:
      name=l[index]+" "+name
      index-=1
      amnt+=1
  else:
    index = 0
    while ord(l[index][0])>64:
      name+=l[index]+" "
      index+=1
    amnt=index
  avg = sum([float(s_l[number]) for number in range(len(l)-amnt)])/(len(l)-amnt)
  print(str(avg)+" "+name[0:len(name)-1])
