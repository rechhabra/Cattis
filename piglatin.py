vowels = "aeiouy"
import fileinput
file = fileinput.input()
for line in file:
  words = line.split()
  ans = ""
  for word in words:
    if vowels.find(word[0])>-1:
      ans+=word+"yay "
      continue
    for i in range(len(word)):
      if word[i] in vowels:
        ans+=word[i:]+word[:i]+"ay "
        break
  print(ans[:len(ans)-1])
