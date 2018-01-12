def compute(d):
    v = [d[i+1]-d[i] for i in range(len(d)-1)]
    return v,len(set(v))==1
nums = list(map(int, input().split()[1:]))
diffs = []
isC = False
diffs.append(nums)
deg = 0
while not isC:
  nums,isC=compute(nums)
  diffs.append(nums)
  deg+=1
print(deg,sum(i[len(i)-1] for i in diffs))
