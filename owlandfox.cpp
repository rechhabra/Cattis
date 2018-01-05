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
    string num;
    cin>>num;
    for (int j = num.size()-1; j>=0; j--){
      if (num[j]=='0') continue;
      char d = num[j]-1;
      string ans = num.substr(0,j);
      ans+=d;
      ans+=num.substr(j+1);
      cout<<stod(ans)<<endl;
      break;
    }
  }
  return 0;
}
