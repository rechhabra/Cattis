nums = list(map(int, input().split(" ")))
amnt1,amnt2 = nums[6:]
t1,t2=[],[]
for a in nums[:6]:
 for b in nums[:6]:
  for c in nums[:6]:
    if a!=b and a!=c and b!=c:
      if a+b+c==amnt1:
         t1=[a,b,c]
      elif a+b+c==amnt2:
         t2=[a,b,c]
t1=list(map(str, sorted(t1)[::-1]))
t2=list(map(str, sorted(t2)[::-1]))
print(str(" ".join(t1))+" "+str(" ".join(t2)))
