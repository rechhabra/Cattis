O = ["+","-","*","//"]
def equalsNum(signs,m):
  return (eval("4"+signs[0]+"4"+signs[1]+"4"+signs[2]+"4"))==m
a = int(input())
for i in range(a):
  works = False
  find = int(input())
  for x in O:
    for y in O:
      for z in O:
        operations = (x+" "+y+" "+z).split(" ")
        if equalsNum(operations,find):
          print("4 "+operations[0][0]+" 4 "+operations[1][0]+" 4 "+operations[2][0]+" 4 = "+str(find))
          works = True
          break
      else:
        continue
      break
    else:
      continue
    break
  if works == False:
    print("no solution")
