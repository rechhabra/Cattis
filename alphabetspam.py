word = input()
ws,lc,uc,sb=0,0,0,0
for letter in word:
  if letter=="_": ws+=1
  elif letter.islower(): lc+=1
  elif letter.isupper(): uc+=1
  else: sb+=1
print(ws/len(word))
print(lc/len(word))
print(uc/len(word))
print(sb/len(word))
