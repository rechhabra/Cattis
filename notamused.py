import fileinput
from decimal import Decimal
cusTime = {}
stillIn = {}
day =1;
file = fileinput.input()
for line in file:
  if line[0]=='O':
    cusTime.clear()
  elif line[1]=='N':
    name,amnt = line.split(" ")[1:]
    amnt = int(amnt)
    stillIn[name]=amnt;
  elif line[1]=='X':
    name,amnt = line.split(" ")[1:]
    amnt = int(amnt)
    if not name in cusTime:
      cusTime[name]=amnt-stillIn[name]
    else:
      cusTime[name]+=(amnt-stillIn[name])
  else:
    print("Day "+str(day))
    for name in sorted(cusTime.keys()):
      print(name+" $"+str(Decimal(cusTime[name]/10).quantize(Decimal("0.01"))))
    print()
    day+=1
    cusTime.clear()
    stillIn.clear()
