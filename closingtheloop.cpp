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
  for (int i = 1; i<=tc; i++){
    cout<<"Case #"<<i<<": ";
    vector <int> r;
    vector <int> b;
    int num;
    cin>>num;
    for (int j = 0; j<num; j++){
      string s;
      cin>>s;
      int val = stod(s.substr(0,s.size()-1));
      if (s.substr(s.size()-1)=="R"){
        r.push_back(val);
      }
      else{
        b.push_back(val);
      }
    }
    int lng = min(r.size(),b.size());
    sort(r.begin(),r.end(),greater<int>());
    sort(b.begin(),b.end(),greater<int>());
    int val=-2*lng;
    for (int k = 0; k<lng; k++){
      val+=r[k]+b[k];
    }
    cout<<max(0,val)<<endl;
  }
}
