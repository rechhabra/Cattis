#include <iostream>//std
#include <cstring>//strlen
#include <algorithm>//math stuff
#include <math.h>//pow,ceil,etc.
#include <vector>//vector
#include <string>//string opers
#include <stack> //stack list
#include <sstream> //split asst.
#include <stdio.h>//extra
#include <iomanip>//round n digit: cout<<setprecision(n)<<fixed<<
using namespace std; //removes use of std::
int main() {
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  int vals[2];
  vals[0]=abs(abs(b)-abs(a));
  vals[1]=abs(abs(c)-abs(b));
  int k = 0;
  if (abs(abs(c)-abs(a))==vals[0]){k=abs(abs(c)-abs(a));}
  else{k=vals[1];}
  int nums[3]={a,b,c};
  sort(nums,nums+3);
  int printed = 0;
  for (int i = 0; i<2; i++){
    if (nums[i+1]-nums[i]!=k){
      printed=1;
      cout<<nums[i]+k<<endl;
      break;
    }
  }
  if (!printed){cout<<nums[2]+k<<endl;}
  return 0;
}
