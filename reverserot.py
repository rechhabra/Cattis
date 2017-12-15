order = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_."
decode = input()
while decode!="0":
  rate = int(decode[:decode.find(" ")])
  print("".join([order[(order.find(letter)+rate)%28] for letter in decode[decode.find(" ")+1:]])[::-1])
  decode=input()
