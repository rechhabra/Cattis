import fileinput
file=fileinput.input()
amnt = 1
for line in file:
  ar=list(map(int, line.split()))[1:]
  mi= min(ar)
  ma= max(ar)
  print("Case "+str(amnt)+": "+str(mi)+" "+str(ma)+" "+str (ma-mi))
  amnt+=1
