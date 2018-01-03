while True:
	r,c = map(int, input().split(" "))
	if r==c==0:
		break
	foo = [""]*c
	for i in range(r):
		s = input()
		for j in range(c):
			foo[j]+=s[j]
	foo = sorted(foo, key=lambda x: x.lower())
	for i in range(r):
		for j in range(c):
			print(foo[j][i],end="")
		print()
