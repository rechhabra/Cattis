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
while (1){
int r,s,h;
cin>>r>>h>>s;
if (r==0 && s==0 && h==0){break;}
double amnt = 2*r*(PI-acos((double)r/h))+2*pow((h*h-r*r),0.5);
cout<<fixed<<setprecision(2)<<amnt*(1.0+s/100.0)<<endl;
}
return 0;
}
