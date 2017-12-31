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
const long double PI= 3.141592653589793238L;
int main(){
  char a[11];
  char b[11];
  scanf("%s",a);
  scanf("%s",b);
  vector<int>skipA;
  vector<int>skipB;
  for (int i = min(strlen(a),strlen(b))-1; i>=0; i--){
    int k = strlen(a)-strlen(b);
    if (strlen(a)>strlen(b)){
      if (a[i+k]>b[i]){
        skipB.push_back(i);
      }
      else if (a[i+k]<b[i]){
        skipA.push_back(i+k);
      }
    }
    else{
      k=strlen(b)-strlen(a);
      if (a[i]>b[i+k]){
        skipB.push_back(i+k);
      }
    else if (a[i]<b[i+k]){
      skipA.push_back(i);
    }
  }
  }
  string ans;
  for(int i = 0; i<strlen(a); i++){
    int there=0;
    for (int j = 0; j<skipA.size(); j++){
      if (skipA[j]==i){there=1; break;}
    }
    if (!there){ans+=a[i];}
  }
  int reala;
  if (ans.length()==0){
    cout<<"YODA"<<endl;
  }
  else{
    stringstream parseInt(ans);
    parseInt>>reala;
    cout<<reala<<endl;
  }
  ans="";
  for(int i = 0; i<strlen(b); i++){
    int there=0;
    for (int j = 0; j<skipB.size(); j++){
      if (skipB[j]==i){there=1; break;}
    }
    if (!there){ans+=b[i];}
  }
  if (ans.length()==0){
    cout<<"YODA"<<endl;
  }
  else{
  stringstream parseInt2(ans);
  parseInt2>>reala;
  cout<<reala<<endl;
  }
  return 0;
}
