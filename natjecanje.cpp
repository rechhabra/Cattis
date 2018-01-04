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
  int numTeams, numD, numR;
  scanf("%d %d %d",&numTeams,&numD,&numR);
  vector<int> damaged;
  vector<int> reserved;
  for (int i = 0; i<numD; i++){
    int val;
    cin>>val;
    damaged.push_back(val);
  }
  for (int i = 0; i<numR; i++){
    int val;
    cin>>val;
    reserved.push_back(val);
  }  
  for (int i = 0; i<numR; i++){
    for (int j = 0; j<numD; j++){
      if (i>=reserved.size()) break;
      if (j>=damaged.size()) break;
      if (abs(reserved[i]-damaged[j])==1){
        reserved.erase(remove(reserved.begin(), reserved.end(), reserved[i]), reserved.end());
        damaged.erase(remove(damaged.begin(), damaged.end(), damaged[j]), damaged.end());
        i--;
        j--;
      }
    }
  }
  cout<<damaged.size()<<endl;
  return 0;
}
