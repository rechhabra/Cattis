#include <iostream>//std
#include <cstring>//strlen
#include <algorithm>//math stuff
#include <math.h>//pow,ceil,sin,cos,etc.
#include <vector>//vector
#include <string>//string opers
#include <stack> //stack list
#include <sstream> //split asst., string to ll
#include <stdio.h>//extra
#include <iomanip>//round n digit: cout<<setprecision(n)<<fixed<<
#include <bits/stdc++.h>//permutations
#include <unordered_set>//sets like python
using namespace std; //removes use of std::
typedef long long ll;
typedef long double ld;
const long double PI= 3.141592653589793238L;
const string vals = " 'ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int main(){
  int tc;
  cin>>tc;
  cin.ignore();
  while (tc--){
    string s;
    getline(cin,s);
    double amnt = 0;
    char prev = s[0];
    for (int i = 1; i<s.size(); i++){
      double x = (double)vals.find(s[i]);
      double y = (double)vals.find(prev);
      double a = abs(x-y);
      double b = 28-a;
      if (a<b) amnt+=a;
      else amnt+=b;
      prev = s[i];
    }
    amnt*=0.44879895;
    cout<<setprecision(10)<<fixed<<amnt+s.length()<<endl;
  }
  return 0;
}
