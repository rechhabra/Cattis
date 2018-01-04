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
  double x,y;
  cin>>x>>y;
  if (x==0 && y==1){
    cout<<"ALL GOOD"<<endl;
  }
  else if (y==1){
    cout<<"IMPOSSIBLE"<<endl;
  }
  else{
    cout<<setprecision(7)<<fixed<<x/(1-y)<<endl;
  }
}
