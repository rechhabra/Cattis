H = [12,1,2,3,4,5,6,7,8,9,10,11]
A = ["am","pm"]
def order(a):
  time,zone = a.split()
  h,m = time.split(":")
  a = "654321"
  if zone[0]=="a":
    a = "123456"
  a2= str(H.index(int(h)))
  if len(a2)==1: a2="0"+a2
  ans = a+a2+m
  return int(ans)
while True:
  tc = int(input())
  if tc==0: break
  vals = []
  for _ in range(tc):
    vals.append(input())
  for _ in sorted(vals, key=lambda x : order(x)):
    print(_)
  print()
