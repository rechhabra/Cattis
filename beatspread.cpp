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
int main(){
int tc;
cin>>tc;
while (tc--){
  int s,d,i;
  cin>>s>>d;
  int a = (s+d)/2;
  int b = s-a;
  if ((s+d)%2==1 || a<0 || b<0){cout<<"impossible"<<endl;}
  else{cout<<a<<" "<<b<<endl;}
}
return 0;
}
