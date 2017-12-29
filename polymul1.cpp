#include <iostream>//std
#include <cstring>//strlen
#include <algorithm>//math stuff
#include <math.h>//pow,ceil,etc.
#include <vector>//vector
#include <string>//string opers
#include <stack> //stack list
#include <sstream> //split asst.
#include <stdio.h>//extra
using namespace std; //removes use of std::
int main(){
int tc;
cin>>tc;
for(int i = 0; i<tc; ++i){
  int deg;
  cin>>deg;
  int poly1[deg+1];
  for(int j = 0; j<deg+1; ++j){
    cin>>poly1[deg-j];
  }
  int deg2;
  cin>>deg2;
  int poly2[deg2+1];
  for (int j = 0; j<deg2+1;++j){
    cin>>poly2[deg2-j];
  }
  int ans[deg+deg2+1]={};
  for (int m = 0; m<deg+deg2+1; m++){
    ans[m]=0;
  }
  for (int item1 = deg; item1>=0; item1=item1-1){
    for (int item2 = deg2; item2>=0; item2=item2-1){
      ans[item1+item2]+=(poly1[item1]*poly2[item2]);
    }
  }
  cout<<deg2+deg<<endl;
  for (int k = deg2+deg; k>=1; k=k-1){
    cout<<ans[k]<<" ";
  }
  cout<<ans[0]<<endl;
}
return 0;
}
