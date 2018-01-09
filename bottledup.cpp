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
#include <stdlib.h> //strtol(string,base)
using namespace std; //removes use of 
const long double PI= 3.141592653589793238L;
int main(){
  int amnt,big,small;
  scanf("%d %d %d",&amnt,&big,&small);
  int c = amnt/big;
  for (int x = c; x>-1; x--){
    if ((amnt-x*big)%(small)==0){
      cout<<x<<" "<<(amnt-x*big)/(small)<<endl;
      return 0;
    }
  }
  cout<<"Impossible"<<endl;
  return 0;
}
