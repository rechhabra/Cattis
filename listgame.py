def compute(num):
  amnt,fc = 1,2
  while (fc*fc<=num):
    if num%fc==0:
      num/=fc
      amnt+=1
    else:
      fc+=1
  return amnt
print(compute(int(input())))
