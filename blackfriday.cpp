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
  cin>>n;
  vector<int> nums;
  vector<int> dont;
  vector<int> orig;
  while(n--){
    int x;
    cin>>x;
    orig.push_back(x);
  }
  for (int x : orig){
    if (find(nums.begin(),nums.end(),x)!=nums.end()){
      if(find(dont.begin(),dont.end(),x)==dont.end()){
      nums.erase(std::remove(nums.begin(), nums.end(), x), nums.end());
      dont.push_back(x);
      }
    }
    if (find(dont.begin(),dont.end(),x)==dont.end()){
      nums.push_back(x);
    }
  }
  if (nums.size()==0){
    cout<<"none"<<endl;
    return 0;
  }
  sort(nums.begin(),nums.end());
  int val = find(orig.begin(),orig.end(),nums[nums.size()-1])-orig.begin();
  cout<<val+1<<endl;
  return 0;
}
