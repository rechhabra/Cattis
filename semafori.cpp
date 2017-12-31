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
using namespace std; //removes use of std::
const long double PI= 3.141592653589793238L;
int main(){
  int tc,dist;
  cin>>tc>>dist;
  int sec = 0;
  int cover = 0;
  for (int i = 0; i<tc; i++){
    if (cover==dist){break;}
    int d,r,g;
    scanf("%d %d %d",&d,&r,&g);
    sec+=d-cover;
    cover=d;
    if (sec%(r+g)<r){
      sec+=(r-sec%(r+g));
    }
  }
  sec+=dist-cover;
  cout<<sec<<endl;
  return 0;
}
