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
string line;
double H=0;
double M=0;
double S=0;
double dist=0;
double sp = 0;
while (getline(cin,line)){
  double h = stod(line.substr(0,2));
  double m = stod(line.substr(3,5));
  double s = stod(line.substr(6,8));
  dist+=(h-H)*sp;
  dist+=(m-M)/60*sp;
  dist+=(s-S)/3600*sp;
  H=h; M=m; S=s;
  if (line.length()>=9){
    sp=stod(line.substr(9));
  }
  else{
    cout<<line<<" "<<setprecision(2)<<fixed<<dist<<" km"<<endl;
  }
}
return 0;
}
