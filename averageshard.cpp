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
const string inc = "0123456789abcdefABCDEF";
int main(){
  int tc;
  cin>>tc;
  while (tc--){
    vector<int> c;
    vector<int> e;
    int numC,numE;
    cin>>numC>>numE;
    double amnt=0;
    for (int i = 0; i<numC; i++){
      int val;
      cin>>val;
      c.push_back(val);
      amnt+=val;
    }
    double avgC = amnt/numC;
    amnt = 0;
    for (int i = 0; i<numE; i++){
      int val;
      cin>>val;
      e.push_back(val);
      amnt+=val;
    }
    double avgE = amnt/numE;
    amnt = 0;
    for (int i = 0; i<numC; i++){
      if (c[i]<avgC){
        if (c[i]>avgE){
          amnt++;
        }
      }
    }
    cout<<amnt<<endl;
  }
  return 0;
}
