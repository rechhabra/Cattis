import fileinput
dic = {}
file = fileinput.input()
foundSpace = False
for baby in file:
  term=baby.strip()
  if term.find(" ")>-1 and not foundSpace:
    dic[term[term.find(" ")+1:]]=term[:term.find(" ")]
  elif term.find(" ")==-1 and len(term)<1: foundSpace=True
  else:
    print(dic[term]) if term in dic else print("eh")
