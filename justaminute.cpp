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
  int tc;
  cin>>tc;
  double amnt=0;
  double mnt=0;
  for (int i = 0; i<tc; ++i){
  double a,b;
  scanf("%lf %lf",&a,&b);
  amnt+=b;
  mnt+=a*60.0;
  }
  double avg = amnt/mnt;
  if (avg<=1){
    cout<<"measurement error"<<endl;
  }
  else{
    cout<<setprecision(7)<<fixed<<avg;
  }
  return 0;
}
