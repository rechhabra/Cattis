trsh, amnt = map(int, input().split(" "))
tot=0
rej=0
for i in range(amnt):
  line = input()
  if line[0:5]=="enter":
    if tot+int(line[6:])>trsh:
      rej+=1
    else:
      tot+=int(line[6:])
  if line[0:5]=="leave":
    tot-=int(line[6:])
print(rej)
