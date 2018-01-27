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
  ll n;
  cin>>n;
  set<ll> ans;
  for (ll i = 1; i<sqrt(n)+1; i++){
    if (n%i==0){
      ans.insert(i-1);
      ans.insert(-1+n/i);
    }
  }
  for (auto i = ans.begin(); i!=ans.end(); i++){
    cout<<*i;
    if (*i<n-1){
      cout<<' ';
    }
  }
  return 0;
}
