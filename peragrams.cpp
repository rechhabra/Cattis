#include <iostream>//std
#include <cstring>//strlen
#include <algorithm>//math stuff
#include <math.h>//pow,ceil,etc.
#include <vector>//vector
#include <string>//string opers
#include <stack> //stack list
using namespace std; //removes use of std::
int main(){
  int amnt[26]={};
  for (int i = 0; i<26; ++i) {
      amnt[i] = 0;
  }
  char s[1001];
  scanf("%s", s);
  int len = strlen(s);
  for (int i = 0; i < len; ++i) {
      amnt[s[i]-'a']++;
  }
  int numO = 0;
  for (int i = 0; i<26; ++i) {
      if (amnt[i]%2!=0) {
        numO++;
      }
  }
  if(numO == 0) {cout<<0<<endl;} 
  else{cout<<numO-1<<endl;}
  return 0;
}
