tc = int(input())
for i in range(tc):
  big = 0
  words = input()
  for j in range(1,len(words)+1):
    big+=1
    fake = words
    fake = fake.replace(words[:j],'')
    if len(fake)>0:
      if words[:len(fake)]==fake: break
    elif len(fake)==0: break
  print(big)
