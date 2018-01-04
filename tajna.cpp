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
#include <bits/stdc++.h>//permutations,upper,lower...
using namespace std; //removes use of std::
const long double PI= 3.141592653589793238L;
int main(){
  char l[101];
  scanf("%s",l);
  if (strlen(l)<=3){cout<<l<<endl;}
  else{
    vector<int> found;
    int r = 1;
    for (int i = pow(strlen(l),0.5); i>1; i--){
      if (strlen(l)%i==0){r=i; break;}
    }
    for (int i = 0; i<r; i++){
      for (int j=0; j<strlen(l); j+=r){
        cout<<l[i+j];
      }
    }
  }
  return 0;
}
