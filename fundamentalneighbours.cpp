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
int n;
while (scanf("%d",&n)==1){
  cout<<n;
  int num = 1;
  int mx = ceil(pow(n,0.5));
  for (int i = 2; i<=mx; i++){
    int amnt = 0;
    while (n%i==0){
      n=n/i;
      amnt++;
    }
    if (amnt>0){
      int mul = pow(amnt,i);
      num*=mul;
    }
  }
  cout<<" "<<num<<endl;
}
return 0;
}
