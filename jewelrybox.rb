#Reshab Chhabra
#time: 0.09s (1st)
tc = gets.to_i
(1..tc).each do |_|
  x,y = gets.split(" ").map{|x| x.to_r}
  a = (x+y)/6
  b = (Math.sqrt(x*x + y*y - x*y))/6
  amnt = a+b
  if not amnt <[x,y].min/2 and amnt>0
    amnt = a-b
  end
  puts(amnt*(x-2*amnt)*(y-2*amnt))
end
