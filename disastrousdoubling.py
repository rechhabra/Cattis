#I attempted the same code in C++, however did not work (im assuming errors with long it) so I completed the code in python
#Time: 0.60 sec
tc, vals = input(), list(map(int, input().split()))
amnt = 1
for x in vals:
  amnt<<=1
  if x>amnt:
    amnt = -99
    break
  amnt-=x
print(amnt%1000000007 if amnt!=-99 else "error")
