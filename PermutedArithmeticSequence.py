def perf(seq):
  cf = seq[1]-seq[0]
  for i in range(1,len(seq)):
    if seq[i]-seq[i-1]!=cf:
      return False
  return True
for i in range(int(input())):
  nums = list(map(int, input().split(" ")))[1:]
  if perf(nums):
    print("arithmetic")
  elif perf(sorted(nums)):
    print("permuted arithmetic")
  else:
    print("non-arithmetic")
