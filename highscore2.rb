#Reshab Chhabra
#Time: 0.03s
tc = gets.to_i
amnt = 99
while tc>0 do
  a,b,c,d = gets.split().map{|x| x.to_i}
  vals = [a,b,c].sort
  huge = vals[0]*vals[0]+vals[1]*vals[1]+(vals[2]+d)*(d+vals[2])+7*vals[0];
  while d>0 and amnt>0 do
    vals[0]+=1
    d-=1
    amnt-=1
    vals = vals.sort
    leanyuh = vals[0]*vals[0]+vals[1]*vals[1]+(vals[2]+d)*(d+vals[2])+7*vals[0];
    if leanyuh>huge then
      huge=leanyuh
    end
  end
  tc-=1
  puts huge.round(0)
end
