while true do
  n = gets.to_i
  if n==-1
    break
  end
  puts (((1 + (-1)**n)*((2 - Math.sqrt(3))**(n/2)*(-1 + Math.sqrt(3)) + 
     (1 + Math.sqrt(3))* (2 + Math.sqrt(3))**(n/2)))/(4*Math.sqrt(3))).round(0)
end
