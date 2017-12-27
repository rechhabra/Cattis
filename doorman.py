thrs = int(input())
ppl = input()
m,i,l=0,0,len(ppl)
while abs(m)<=thrs and i<l:
  if ppl[i]=="M": m+=1
  else: m-=1
  if abs(m)>thrs and i+1<l:
    if ppl[i+1]=="M": m+=1
    else: m-=1
    if abs(m)>thrs: break
    else: i+=1
  i+=1
print(i)
