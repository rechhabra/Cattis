#Reshab Chhabra
#Time: 0.18s (1st)
def check s
	return s==s.reverse
end
n = gets.to_i
(1..n).each do |x|
	i = 0
	num = gets.to_i
	use1 = (num-i).to_s
	use2 = (num+i).to_s
	while not (check use1 and use1.length == 6) and not (check use2 and use2.length == 6)
		i+=1
	  use1 = (num-i).to_s
	  use2 = (num+i).to_s
	end
	if (check (num-i).to_s and (num-i).to_s.length == 6)
		puts num-i
	else
    puts num+i
	end
end
