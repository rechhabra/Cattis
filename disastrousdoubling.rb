#Reshab Chhabra
#Time: 0.45s(2nd)
tc=gets
vals = gets.split(" ")
amnt = 1
vals.each do |x|
  x = x.to_i
  amnt<<=1
  if x > amnt
    amnt = -99
    break
  end
  amnt-=x
end
if amnt != -99
  puts(amnt%1000000007)
else
  puts('error')
end
