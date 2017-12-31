key,val = input().split(" ")
prev=-1
for ch in key:
  num = val.find(ch)
  if num<prev or num<0:
    prev=-10
    break
  prev=num
  val=val[0:num]+val[num+1:]
print("PASS" if prev>-1 else "FAIL")
