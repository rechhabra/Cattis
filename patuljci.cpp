#include <iostream>//std
#include <algorithm>//min
#include <math.h>//pow
using namespace std; //removes use of std::
int main() {
  int dwarfs[9]={};
  int amnt = -100;
  for(int i = 0; i<9; ++i){
    int val;
    cin>>val;
    dwarfs[i]=val;
    amnt+=val;
  }
  int fakeDwarfs[2]={};
  for(int i = 0; i<9; ++i){
    for (int j = 0; j<9; ++j){
      if (i!=j){
        if (dwarfs[i]+dwarfs[j]==amnt){
          fakeDwarfs[0]=dwarfs[i];
          fakeDwarfs[1]=dwarfs[j];
          break;
        }
      }
    }
  }
  for(int i = 0; i<9; ++i){
    if (fakeDwarfs[0]!=dwarfs[i] and fakeDwarfs[1]!=dwarfs[i]){
      cout<<dwarfs[i]<<endl;
    }
  }
  return 0;
}
