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
int lng;
cin>>lng;
vector<int>nums;
string ans="";
for (int i = 0; i<lng; i++){
  int v;
  cin>>v;
  nums.push_back(v);
}
ans+=to_string(nums[0]);
ans+=" ";
int val = nums[0];
int amnt = 1;
for (int i = 1; i<lng; i++){
  if (nums[i]>val){
    amnt++;
    val = nums[i];
    ans+=to_string(nums[i]);
    ans+=" ";
  }
}
cout<<amnt<<endl;
cout<<ans.substr(0,ans.length()-1)<<endl;
return 0;
}
