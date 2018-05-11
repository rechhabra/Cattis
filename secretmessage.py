#Reshab Chhabra, time: 0.03s (6th)
from math import ceil,sqrt
def ROT(mm, degree=90):
    return mm if not degree else ROT(zip(*mm[::-1]), degree-90)
tc = int(input())
for i in range(tc):
  s = input()
  K = int(ceil(sqrt(len(s))))
  M = K*K
  s+="*"*(M-len(s))
  vals = ROT([s[x:x+K] for x in range(0,len(s)-K+1,K)], 90)
  for v in vals:
    print(("".join(v)).replace("*",""),end="")
  print()
