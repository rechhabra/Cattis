suit = {"P":13, "K":13, "H":13, "T":13}
past=""
a = input()
for i in range(0,len(a),3):
  if past.find(a[i:i+3])>=0:
    print("GRESKA")
    break
  else:
    past+=a[i:i+3]
    suit[a[i]]-=1
if a==past: print(str(suit["P"])+" "+str(suit["K"])+" "+str(suit["H"])+" "+str(suit["T"]))
