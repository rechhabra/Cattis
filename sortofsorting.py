while (True):
  tc = int(input())
  if tc==0: break
  names=sorted([input() for i in range(tc)], key=lambda x : x[:2])
  for name in names:
    print(name)
  print()
