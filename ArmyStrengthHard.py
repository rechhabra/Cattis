cases = int(input())
for i in range(cases):
  skipALine = input()
  skipALine = input()
  godzilla = sorted(list(map(int, input().split(" "))))[::-1]
  mecha = sorted(list(map(int, input().split(" "))))[::-1]
  while (len(mecha)>0 and len(godzilla)>0):
    godzilla.pop() if godzilla[-1]<mecha[-1] else mecha.pop()
  print("Godzilla") if len(godzilla)>0 else print("MechaGodzilla")
