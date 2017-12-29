#include <iostream>//std
#include <cstring>//strlen
#include <algorithm>//math stuff
#include <math.h>//pow
#include <vector>//vector
#include <string>
using namespace std; //removes use of std::
int main(){
  char inp[100001]={};
  cin>>inp;
  int amnt = 0;
  for (int i = 0; i<strlen(inp); i++){
    if (inp[i]=='B'){amnt++;}
    else{amnt--;}
  }
  if (amnt==0){cout<<1;}
  else{cout<<0;}
  return 0;
}
