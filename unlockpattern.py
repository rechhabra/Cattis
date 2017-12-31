from decimal import Decimal
pad = [list(map(int, input().split(" "))) for i in range(3)]
def computeD(n):
  nx,ny=0,0
  dx,dy=0,0
  for i in range(3):
    for j in range(3):
      if pad[i][j]==n:
        nx,ny=i,j
      elif pad[i][j]==n+1:
        dx,dy=i,j
  return Decimal(((dx-nx)*(dx-nx)+(dy-ny)*(dy-ny))**0.5)
print(str(Decimal(sum([computeD(i) for i in range(1,9)])).quantize(Decimal('0.00000001'))))
