from math import factorial
def c(n,k):
  return factorial(n)/(factorial(n-k)*factorial(k))
num = int(input())
amnt = 0
for i in range(2,1+num):
  amnt+=c(num,i)
print(int(amnt))
