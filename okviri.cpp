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
using namespace std; //removes use of std::
const long double PI = 3.141592653589793238L;
int main(){
  char s[16];
  scanf("%s",s);
  string l1="";
  string l2="";
  string l3="";
  for (int i = 0; i<strlen(s); i++){
    if ((i+1)%3==0){
      l1+="..*.";
      l2+=".*.*";
      l3+="*";
    }
    else{
      l1+="..#.";
      l2+=".#.#";
      if (i==0 or i%3!=0)
        l3+="#";
    }
    l3+=".";
    l3+=s[i];
    l3+=".";
    if ((i+1)%3==0){
      l3+="*";
    }
  }
  l1+=".";
  l2+=".";
  if (strlen(s)%3!=0){
    l3+="#";
  }
  cout<<l1<<endl<<l2<<endl<<l3<<endl<<l2<<endl<<l1<<endl;
  return 0;
}
