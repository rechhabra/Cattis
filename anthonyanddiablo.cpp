#include <iostream>//std
#include <cstring>//strlen
#include <algorithm>//math stuff
#include <math.h>//pow,ceil,sin,cos,etc.
#include <vector>//vector
#include <string>//string opers
#include <stack> //stack list
#include <sstream> //split asst., string to int
#include <stdio.h>//extra
#include <iomanip>//round n digit: cout<<setprecision(n)<<fixed<<
#include <bits/stdc++.h>//permutations
using namespace std; //removes use of std::
const long double PI= 3.141592653589793238L;
int main(){
  double a,p;
  scanf("%lf %lf",&a,&p);
  if (a<=((p*p)/(4*PI))){printf("Diablo is happy!\n");}
  else{printf("Need more materials!\n");}
  return 0;
}
