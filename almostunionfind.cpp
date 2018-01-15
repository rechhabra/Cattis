#include <iostream>//std
#include <cstring>//strlen
#include <algorithm>//math stuff
#include <math.h>//pow,ceil,sin,cos,etc.
#include <vector>//vector
#include <string>//string opers
#include <stack> //stack list
#include <sstream> //split asst., string to ll
#include <stdio.h>//extra
#include <iomanip>//round n digit: cout<<setprecision(n)<<fixed<<
#include <bits/stdc++.h>//permutations
#include <unordered_set>//nums like python
#include <set>
using namespace std; //removes use of 
typedef long long ll;
const long double PI= 3.141592653589793238L;
int vals[100001]={};
vector<int> nums[100001];
void combine(int p, int q) {
  int P = vals[p];
  int Q = vals[q];
  if (P == Q) {
    return;
  }
  if (nums[P].size() >= nums[Q].size()) {
    for (int i : nums[Q]) {
      nums[P].push_back(i);
      vals[i] = P;
    }
    nums[Q].clear();
  }
  else {
    for (int i : nums[P]) {
      nums[Q].push_back(i);
      vals[i] = Q;
    }
    nums[P].clear();
  }
}
void result(int p) {
  int P = vals[p];
  int amnt = 0;
  for (int v : nums[P]) {
    amnt+=v;
  }
  printf("%d %d\n", nums[P].size(), amnt);
}
void move(int p, int q){
  int P = vals[p];
  int Q = vals[q];
  if (P == Q) {
    return;
  }
  auto it = nums[P].begin();
  while (*it!=p) {
    it++;
  }
  nums[P].erase(it);
  nums[Q].push_back(p);
  vals[p] = Q;
}
int main() {
  int size,tc;
  int oper, p, q;
  while (scanf("%d %d", &size, &tc)== 2) {
    for (int i=1; i<=size; i++) {
      vals[i] = i;
      nums[i].clear();
      nums[i].push_back(i);
    }
    while(tc--){
      cin>>oper>>p;
      if (oper==1){
        cin>>q;
        combine(p, q);
      }
      else if(oper==2){
        cin>>q;
        move(p, q);
      }
      else{
        result(p);
      }
    }
  }
  return 0;
}
