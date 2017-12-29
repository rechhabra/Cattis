line = input()
maxxy = 101
acd = set()
for i in range(1,len(line)+1):
    for j in range(0,len(line)-i):
        checker = line[j:j+i]
        if checker in acd:
            continue
        acd.add(checker)
        k=line.count(checker)
        amnt= len(line)-(i*k)+k+i
        maxxy = min(amnt,maxxy)
print(min(maxxy,len(line)))
