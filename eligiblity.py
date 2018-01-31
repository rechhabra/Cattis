tc = int(input())
for _ in range(tc):
  name,study,born,course = input().split()
  print(name,end=" ")
  if 2010<=int(study[:4]):
    print("eligible")
    continue
  elif 1991<=int(born[:4]):
    print("eligible")
    continue
  elif int(course)>40:
    print("ineligible")
  else:
    print("coach petitions")
