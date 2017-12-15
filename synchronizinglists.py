lngth = int(input())
while (lngth!=0):
  l1=[int(input()) for i in range(lngth)]
  l2=[int(input()) for i in range(lngth)]
  s1=sorted(l1)
  s2=sorted(l2)
  i1=[s1.index(l1[i]) for i in range(lngth)]
  r1=[str(s2[i]) for i in i1]
  print('\n'.join(r1)+"\n")
  lngth=int(input())
