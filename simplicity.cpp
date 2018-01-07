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
  char s[101];
  cin>>s;
  vector<char> l;
  for (int i = 0; i<strlen(s); i++){
    char c = s[i];
    if (find(l.begin(),l.end(),c)==l.end()){
      l.push_back(c);
    }
  }
  if (l.size()<3){cout<<0<<endl; return 0;}
  vector<char> n;
  for (int i = 0; i<l.size(); i++){
    n.push_back(count(s, s+strlen(s), l[i]));
  }
  long amnt = 0;
  sort(n.begin(),n.end());
  for (int i = 0; i<l.size()-2; i++){
    amnt+=n[i];
  }
  cout<<amnt<<endl;
  return 0;
}
