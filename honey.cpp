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
const long vals[22]={-1, 0, 6, 12, 90, 360, 2040, 10080, 54810, 290640, 1588356, 8676360, 47977776, 266378112, 1488801600, 8355739392, 47104393050, 266482019232, 1512589408044, 8610448069080, 49144928795820, 281164160225520};
int main(){
  int tc;
  cin>>tc;
  while (tc--){
    int num;
    cin>>num;
    cout<<vals[num]<<endl;
  }
  return 0;
}
