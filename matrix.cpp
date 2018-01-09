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
  int a,b,c,d;
  int i = 0;
  while (cin>>a>>b>>c>>d){
    int r = a*d-b*c;
    cout<<"Case "<<++i<<":"<<endl<<d/r<<" "<<-b/r<<endl<<-c/r<<" "<<a/r<<endl;
  }
  return 0;
}
