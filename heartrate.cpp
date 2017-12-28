#include <iostream>//std
#include <algorithm>//min
#include <math.h>//pow
using namespace std; //removes use of std::
int main() {
int tc;
cin>>tc;
while (tc--){
  double b;
  double p;
  scanf("%lf %lf",&b,&p);
  //lf prevents the double being infinite instead of %d
  double val = 60*b/p;
  double fact = 60/p;
  printf("%.4f %.4f %.4f\n",val-fact,val,val+fact);
}
return 0;
}
