#include <iostream>//std
#include <cstring>//strlen
#include <algorithm>//math stuff
#include <math.h>//pow,ceil,etc.
#include <vector>//vector
#include <string>//string opers
#include <stack> //stack list
using namespace std; //removes use of std::
int gcd(int a, int b){
  if (b==0){
    return a;
  }
  return gcd(b,a%b);
}

int main(){
int tc;
cin>>tc;
int u = 1;
int d = 1;
int prv;
cin>>prv;
for (int i = 1; i<tc; ++i){//i noticed using prv i need to record one less
  u*=prv;
  int amnt;
  cin>>amnt;
  d*=amnt;
  int maxxy = gcd(u,d);
  u/=maxxy;
  d/=maxxy;
  cout<<u<<"/"<<d<<endl;
  prv=amnt;
}
return 0;
}
