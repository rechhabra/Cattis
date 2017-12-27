from math import ceil
from math import log
need = int(input())
maxBar = 2**(ceil(log(need)/log(2)))
ans=str(maxBar)
numB = 0
amnt = 0
while (amnt<need):
  if (maxBar+amnt<=need): amnt+=maxBar
  else: 
    numB+=1
    maxBar/=2
print(ans+" "+str(numB))
