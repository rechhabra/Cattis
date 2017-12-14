opers = []
a = input()
onesRight=""
pen = 0
while (a!="-1"):
  opers.append(a)
  if a.find("right")>=0: 
    onesRight+=a.split(" ")[1]
    pen+=int(a.split(" ")[0])
  a = input()
for item in opers:
  details = item.split(" ")#min letter status
  if onesRight.find(details[1])>=0:
    pen+=20
pen-=len(onesRight)*20
print(str(len(onesRight))+" "+str(pen))
