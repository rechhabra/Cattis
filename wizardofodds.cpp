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
#include <unordered_set>//sets like python4
#include <set>
using namespace std; //removes use of std::
typedef long long ll;
typedef long double ld;
const long double PI= 3.141592653589793238L;
int main(){
  ld n,k;
  cin>>n>>k;
  if (ceil(log2l(n))<=k) cout<<"Your wish is granted!"<<endl;
  else cout<<"You will become a flying monkey!"<<endl;
  return 0;
}
