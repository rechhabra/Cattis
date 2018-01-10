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
using namespace std; //removes use of 
typedef long long ll;
const long double PI= 3.141592653589793238L;
int main(){
//what i learned: sets are fast
  while(1){
    unordered_set<int> jack;
    int amnt = 0, a, b, val;
    scanf("%d %d", &a, &b);
    if (!a && !b){break;}
    while (a--){
      scanf("%d", &val);
      jack.insert(val);
    }
    while (b--){
      scanf("%d", &val);
      if (jack.find(val)!=jack.end()){
        amnt++;
      }
    }
    printf("%d\n", amnt);
  }
  return 0;
}
