from decimal import Decimal
tc = int(input())
for i in range(tc):
  nums = sorted(list(map(int, input().split(" ")[1:])))[::-1]
  avg = sum(nums)/len(nums)
  amnt = 0
  while (nums[amnt]>avg):
    amnt+=1
  print(str(Decimal(str(amnt/len(nums)*100)).quantize(Decimal('0.001')))+"%")
