tc = int(input())
for i in range(tc):
    coords = list(map(int, input().split(" ")))
    pos = [(coords[i], coords[i+1]) for i in range(1, (coords[0] * 2) + 1, 2)]
    bA, bB = pos[0]
    area = 0
    for p1, p2 in zip(pos[1:], pos[2:]):
        a, b, c, d =p1[0]-bA, p1[1]-bB, p2[0]-bA, p2[1]-bB
        area+=abs(a*d-b*c)/2
    print(area)
