amnt, w, h = map(int, input().split(" "))
maxL = (w*w+h*h)**0.5
for i in range(amnt):
  print("DA" if int(input())<=maxL else "NE")
