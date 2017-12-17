import math
p,a,b,c,d,n = map(float, input().split(" "))
amnt = float(0)
maxxy = p*(math.sin(a+b)+math.cos(c+d)+2)
i = 2
while i <= n:
    func=p*(math.sin(a*i+b)+math.cos(c*i+d)+2)
    if max(maxxy,func)!=maxxy:
      maxxy = func
    elif max(amnt,maxxy-func)!=amnt:
        amnt=maxxy- func
    i += 1
print(amnt)
