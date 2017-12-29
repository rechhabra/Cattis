#include <iostream>//std
#include <cstring>//strlen
#include <algorithm>//math stuff
#include <math.h>//pow
#include <vector>//vector
#include <string>
using namespace std; //removes use of std::
int main(){
  int a,b,c,d,p,m,g;
  cin>>a>>b>>c>>d;
  for (int i = 0; i<3; ++i){
  int amnt = 0;
  int p;
  cin>>p;
  if (p%(a+b)<=a && p%(a+b)!=0){amnt++;}
  if (p%(c+d)<=c && p%(c+d)!=0){amnt++;}
  switch(amnt){
    case 0: cout<<"none"<<endl;
    break;
    case 1: cout<<"one"<<endl;
    break;
    case 2: cout<<"both"<<endl;
    break;
  }
  }
  return 0;
}
