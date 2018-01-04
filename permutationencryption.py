while True:
  line = input()
  if line=='0': break
  s = line.split(" ")
  N = int(s[0])
  order = list(map(int, s[1:]))
  words = input()
  while (len(words)%N!=0): words+=" "
  ans = ""
  K = 0
  for i in range(0,len(words)):
    if i>0 and i%N==0:
      K+=N
    ans+=(words[order[i%N]-1+K])
  print("'"+ans+"'")
