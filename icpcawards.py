a = int(input())
b=""
c=0
for i in range(a):
  if c==12: break
  team = input()
  if b.find(team[:team.find(" ")])<0:
    b+=team+"\n"
    c+=1
print(b)
