cases = int(input())
for i in range(cases):
  skipALine = input()
  skipALine = input()
  godzilla = sorted(list(map(int, input().split(" "))))
  mecha = sorted(list(map(int, input().split(" "))))
  while (len(mecha)>0 and len(godzilla)>0):
    if mecha[0]==godzilla[0]:
      del mecha[0]
    else:
      if max(mecha[0],godzilla[0])==godzilla[0]:
        del mecha[0]
      else:
        del godzilla[0]
  print("Godzilla") if len(godzilla)>0 else print("MechaGodzilla")
