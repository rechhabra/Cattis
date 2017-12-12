def eratosthenes(n):
    loops = 0
    numbers = list(range(0, n))
    for prime in numbers:
        if prime < 2:
            continue
        elif prime > n ** 0.5:
            break
        for i in range(prime ** 2, n, prime):
            numbers[i] = 0
            loops += 1
    return [x for x in numbers if x > 1]
a = int(input())
ans=""
checkList = eratosthenes(997)
for i in range(a):
  n,d = list(map(int, input().split(" ")))
  numChecker=0
  while(n%checkList[numChecker]!=0):
    numChecker+=1
  numChecker = checkList[numChecker]
  q,p = numChecker,n//numChecker
  calc=(q-1)*(p-1)
  tcalc = calc
  A,D,B,C = 0,0,1,1
  while calc is not 0:
    q, r = [d//calc, d%calc]
    m, n = [A-C*q,B-D*q]
    d, calc, A, B, C, D = [calc, r, C, D, m, n]
  print(B+tcalc) if B<=0 else print(B)
