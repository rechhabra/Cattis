word = input()
tc = int(input())
words = set()
for _ in range(tc):
  keys = input().split()
  if any([word.endswith(term) for term in keys]):
    for item in keys:
      words.add(item)
tc = int(input())
for _ in range(tc):
  line = input()
  print("YES" if any([line.endswith(end) for end in words]) else "NO")
