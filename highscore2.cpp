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
#include <unordered_set>
#include <set>
using namespace std; //removes use of std::
typedef long long ll;
typedef long double ld;
const long double PI= 3.141592653589793238L;
int main(){
  int tc;
  cin>>tc;
  int amnt = 99;
  while (tc--){
    ld a,b,c,d;
    cin>>a>>b>>c>>d;
    vector<ld>vals;
    vals.push_back(a);
    vals.push_back(b);
    vals.push_back(c);
    sort(vals.begin(),vals.end());
    ld big = vals[0]*vals[0]+vals[1]*vals[1]+(vals[2]+d)*(d+vals[2])+7*vals[0];
    while (d>0 && amnt>0){
      vals[0]++;
      d--;
      amnt--;
      sort(vals.begin(),vals.end());
      ld v = vals[0]*vals[0]+vals[1]*vals[1]+(vals[2]+d)*(d+vals[2])+7*vals[0];
      if (v>big){
        big = v;
      }
    }
    cout<<setprecision(0)<<fixed<<big<<endl;
  }
  return 0;
}
