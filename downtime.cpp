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
#include <unordered_set>//sets like python
#include <set>
using namespace std; //removes use of 
typedef long long ll;
const long double PI= 3.141592653589793238L;
int main(){
  int tc,k;
  scanf("%d %d",&tc,&k);
  int r[tc];
  cin>>r[0];
  double threshold = 1;
  int holding = 1;
  int timeLeft = 0;
  for (int i = 1; i<tc; i++){
    cin>>r[i];
    holding++;
    while (r[i]>=r[timeLeft]+1000){
      timeLeft++;
      holding--;
    }
    if (threshold<holding) threshold=holding;
  }
  cout<<ceil(threshold/k)<<endl;
  return 0;
}
