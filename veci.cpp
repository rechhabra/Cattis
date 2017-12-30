#include <iostream>//std
#include <cstring>//strlen
#include <algorithm>//math stuff
#include <math.h>//pow,ceil,etc.
#include <vector>//vector
#include <string>//string opers
#include <stack> //stack list
#include <sstream> //split asst., string to int
#include <stdio.h>//extra
#include <iomanip>//round n digit: cout<<setprecision(n)<<fixed<<
#include <bits/stdc++.h>//permutations
using namespace std; //removes use of std::
vector<int> perms;
void permute(string str, string out)
{
    if (str.size() == 0){
      stringstream parseInt(out);
      int num = 0;
      parseInt>>num;
      perms.push_back(num);
      return;
    }
    for (int i = 0; i < str.size(); i++){
      permute(str.substr(1), out + str[0]);
      rotate(str.begin(), str.begin() + 1, str.end());
    }
}

int main() {
  char num[9];
  scanf("%s",&num);
  permute(num, "");
  stringstream parseInt(num);
  int newN;
  parseInt>>newN;
  int diff = 1000000;//max number given
  for (int i = 0; i<perms.size(); i++){
    if (perms[i]>newN){
      diff = min(perms[i],diff);
    }
  }
  if (diff==1000000){cout<<0<<endl;}
  else{cout<<diff<<endl;}
  return 0;
}
