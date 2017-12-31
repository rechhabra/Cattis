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
const long double PI = 3.141592653589793238L;
int main(){
  int a,b;
  int i = 0;
  while (scanf("%d %d",&a,&b)==2){
  i++;
  int amnt = 0;
  while ((a+amnt)%365!=0 or (b+amnt)%687!=0){amnt++;}
  cout<<"Case "<<i<<": "<<amnt<<endl;
  }
  return 0;
}
