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
using namespace std; //removes use of 
typedef long long ll;
const long double PI= 3.141592653589793238L;
vector<string> words;
bool flip(string a,string b){
  reverse(a.begin(),a.end());
  reverse(b.begin(),b.end());
  if (a<b){
    return true;
  }
  return false;
}
void foo() {
  int big = 0;
  for(string i : words){
    int l = i.length();
    if (big<l){
      big = l;
    }
  }
  sort(words.begin(), words.end(),flip);
  vector<string> ans;
  for(string i : words) {
    string repl="";
    for(int j = 0; j<big-i.length(); j++){
      repl+=" ";
    }
    repl+=i;
    ans.push_back(repl);
  }
  for(string i : ans){
    cout<<i<<endl;
  }
}

int main() {
  string s;
  while(getline(cin, s)) {
    if(s == ""){
      foo();
      cout<<endl;
      words.clear();
    }
    else{words.push_back(s);}
    }
  foo();
  return 0;
}
