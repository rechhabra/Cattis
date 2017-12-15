def p(n):
  amnt = 1
  prop = n**0.5
  for i in range(2,int(prop)+1):
    if (n%i==0): 
      if (i**2==n):amnt+=i
      else: amnt+=i+n/i
  return amnt
import fileinput
for line in fileinput.input():
  number = int(line)
  ans = str(number)+" "
  amnt = int(p(number))
  if number==amnt: ans+="perfect"
  elif abs(amnt-number)<=2: ans+="almost perfect"
  else: ans+="not perfect"
  print(ans)
