pos = int(input())
numP = int(input())
time=210
for i in range(numP):
  status=input()
  time-=int(status[:status.find(" ")])
  if status[-1]=="T" and time>0: pos=(pos+1)%9
  if pos==0: pos=1
  if time<=0: break
print(pos) if pos<8 else print("8")
