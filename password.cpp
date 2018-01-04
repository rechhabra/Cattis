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
  double amnt = 0;
  vector<double> vals;
  for (int i = 0; i<tc; i++){
    string s;
    double prob;
    cin>>s>>prob;
    vals.push_back(prob);
  }
  sort(vals.begin(),vals.end());
  for (int i = tc; i>0; i--){
    amnt+=vals[i-1]*(tc-i+1);
  }
  cout<<setprecision(5)<<fixed<<amnt<<endl;
  return 0;
}
