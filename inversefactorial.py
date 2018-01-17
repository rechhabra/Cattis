#notice the distinct lengths of factorials, also number of zeroes in them
#begin when n=5, also lengths become distinct after n=6
from math import log10,floor
vals = {"1": 1, "2":2, "6":3,"0":1,"24":4,"120":5,"720":6}
num = input()
if num in vals: print(vals[num])
else:
  amnt = 2.8573325
  curr = 7
  d = len(num)
  while amnt<=d:
    amnt+=log10(curr)
    curr+=1
  print(curr-2)
