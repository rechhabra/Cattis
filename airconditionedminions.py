tc = int(input())
rooms = []
for i in range(tc):
  rooms.append(list(map(int, input().split(" "))))
rooms = sorted(rooms, key=lambda i: i[1])
# i decided to sort by 2nd elemnt
maxRooms = 0
while rooms:
	maxRooms+=1
	maxRange= rooms[0][1]
	lock = 0
	while lock<len(rooms) and (rooms[lock][0]<=maxRange<=rooms[lock][1]):
		lock += 1
	rooms = rooms[lock:]
print(maxRooms)
