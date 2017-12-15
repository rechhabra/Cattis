mb = int(input())
months = int(input())
amnt=(months+1)*mb
for i in range(months):
  amnt-=int(input())
print(amnt)
