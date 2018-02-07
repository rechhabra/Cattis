#max letters it really needs = log26(100,000)~4 letters
#Code time: 0.20 sec
letters = "abcdefghijklmnopqrstuvwxyz"
a,b = map(int, input().split())
def do(amnt):
  c = 0
  for A in letters:
    for B in letters:
      for C in letters:
        for D in letters[1:]:
          print(A+B+C+D,end=' ')
          c+=1
          if c>=amnt: return
do(max(a,b//2+1))
