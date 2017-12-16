r,n = map(int, input().split(" "))
rooms = [0]*(r+1)
for i in range(n):
    room = int(input())
    rooms[room] = 1
room = -1
for i in range(1, r+1):
    if rooms[i]==0:
        room = i
        break
print("too late" if room==-1 else room)
