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
  int N,C;
  scanf("%d %d",&N,&C);
  vector<int> oz;
  for (int i = 0; i<N; i++){
    int num;
    cin>>num;
    oz.push_back(num);
  }
  int amnt = 0;
  for (int i = 0; i<oz.size(); i++){
    int tot = 0;
    int amn = 0;
    for (int j = i; j<oz.size(); j++){
      if (oz[j]+tot<=C){
        tot+=oz[j];
        amn++;
      }
      if (tot==C){break;}
    }
    amnt=max(amnt,amn);
  }
  cout<<amnt<<endl;
  return 0;
}
