#Reshab Chhabra
#Time :0.23s (7th)
while True:
  line = input()
  if line[0]=='0': break
  crs,tc = map(int, line.split())
  taking = [int(x) for x in input().split()]
  work = 1
  for _ in range(tc):
    vals = [int(i) for i in input().split()]
    if work:
      need = vals[1]
      amnt = 0
      for num in vals[2:]:
        if num in taking:
          amnt+=1
      if amnt<need:
        work = 0
  print("yes" if work else "no")
