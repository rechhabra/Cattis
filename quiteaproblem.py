import fileinput
file = fileinput.input()
for line in file:
  print("yes" if line.lower().find("problem")>-1 else "no")
