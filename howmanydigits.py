from math import log, floor, pi
from fileinput import input
def stirling(n):
    if (n<4): return 1
    return floor(((n+0.5)*log(n)-n +0.9189385332046727)/2.302585092994046)+1
for line in input():
  print(stirling(int(line)))
