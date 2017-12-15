has,found,amnt = map(int, input().split(" "))
drank=has+found
tot=0
while drank>=amnt:
  tot+=drank//amnt
  drank=drank//amnt+drank%amnt
print(tot)
