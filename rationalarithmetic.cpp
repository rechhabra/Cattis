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
using namespace std; //removes use of 
typedef long long ll;
const long double PI= 3.141592653589793238L;
ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a % b);
}
void foo(ll num, ll den, ll gc){
  bool pos = (num>0 && den>0) || (num<0 && den<0);
  if (num<0) num=-num;
  if (den<0) den=-den;
  num/= gc, den/= gc;
  if (num==0 || den==0) cout << "0 / 1" << endl;
  else cout << (pos?"":"-") << num << " / " << den << endl;
}
vector<ll> add(ll a, ll b, ll c, ll d){
  ll num = 0;
  ll den = 0;
  num=a*d+b*c;
  den=b*d;
  vector <ll> spicy;
  spicy.push_back(num);
  spicy.push_back(den);
  return spicy; 
}
vector<ll> subtract(ll a, ll b, ll c, ll d){
  ll num = 0;
  ll den = 0;
  num=a*d-b*c;
  den=b*d;
  vector <ll> spicy;
  spicy.push_back(num);
  spicy.push_back(den);
  return spicy; 
}
vector<ll> multiply(ll a, ll b, ll c, ll d){
  ll num = 0;
  ll den = 0;
  num=a*c;
  den=b*d;
  vector <ll> spicy;
  spicy.push_back(num);
  spicy.push_back(den);
  return spicy; 
}
vector<ll> divide(ll a, ll b, ll c, ll d){
  ll num = 0;
  ll den = 0;
  num=a*d;
  den=b*c;
  vector <ll> spicy;
  spicy.push_back(num);
  spicy.push_back(den);
  return spicy; 
}
int main() {
  ll tc;
  cin>>tc;
  while (tc--){
    ll a,b,c,d;
    char sign;
    cin>>a>>b>>sign>>c>>d;
    vector <ll> ans;
    if (sign=='+'){
      ans = add(a,b,c,d);
    }
    else if (sign=='-'){
      ans = subtract(a,b,c,d);
    }
    else if(sign=='*'){
      ans = multiply(a,b,c,d);
    }
    else{
      ans = divide(a,b,c,d);
    }
    ll gc = gcd(abs(ans[0]),abs(ans[1]));
    foo(ans[0],ans[1],gc);    
  }
  return 0;
}
