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
  int tc=0;
  while (scanf("%d",&n)==1){
    cout<<"Case "<<++tc<<":"<<endl;
    vector <int> nums;
    for (int i = 0; i<n; i++){
      int val;
      cin>>val;
      nums.push_back(val);
    }
    sort(nums.begin(),nums.end());
    int q;
    cin>>q;
    
    for (int x = 0; x<q; x++){
      int sum;
      cin>>sum;
      int f = 0;
      int biggy=10000001;
      int diff=10000001;
      for (int i = 0; i<n; i++){
        for (int j = i+1; j<n; j++){
          if (nums[i]+nums[j]==sum){biggy=sum; f=1; break;}
          int d = abs(sum-nums[i]-nums[j]);
          if (d<diff){
            diff = d;
            biggy=nums[i]+nums[j];
          }
          if (nums[i]+nums[j]>sum){
            break;
          }
        }
      if (f){break;}
      }
      cout<<"Closest sum to "<<sum<<" is "<<biggy<<"."<<endl;
    }
  }
}
