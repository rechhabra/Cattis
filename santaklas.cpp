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
using namespace std; //removes use of 
const long double PI= 3.141592653589793238L;
int main() {
  int d;
  double sign;
  cin>>d>>sign;
  if (sin(sign*PI/180)>=0){
    cout<<"safe"<<endl;
    return 0;
  }
  cout<<floor(abs(d/sin(sign*PI/180)))<<endl;
  return 0;
}
