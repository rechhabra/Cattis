a = input()
i=0
ans = ""
m = {"R":"S","B":"K","L":"H"}
while (i<len(a)):
  if len(a)-i>=3:
    if a[i]!=a[i+1] and a[i+1]!=a[i+2] and a[i]!=a[i+2]:
      ans+="C"
      i+=3
    else:
      ans+=m[a[i]]
      i+=1
  else:
    ans+=m[a[i]]
    i+=1
print(ans)
