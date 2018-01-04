vals={}
while True:
  x = input()
  if x=='0': break
  x = x.replace(' ','')
  if x.find("=")>-1:
    key,val = x.split("=")
    vals[key]=int(val)
    continue;
  line = x.split("+")
  amnt = 0
  rest = []
  for item in line:
    if ord(item[0])<=57:
      amnt+=int(item)
    elif item in vals:
      amnt+=vals[item]
    else:
      rest.append(item)
  if len(rest)>0:
      print(str(amnt)+" + "+" + ".join(rest) if amnt!=0 else " + ".join(rest))
  else:
    print(amnt)
