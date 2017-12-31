import fileinput
file = fileinput.input()
for line in file:
  nums = list(map(int, line.split(" ")))
  amnt = sum(nums)
  for number in nums:
    if amnt-number==number:
      print(number)
      break
