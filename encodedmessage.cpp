#include <iostream>//std
#include <cstring>//strlen
#include <algorithm>//math stuff
#include <math.h>//pow
using namespace std; //removes use of std::
int main(){
  int tc;
  cin>>tc;
  while (tc--){
    char c[]={};
    cin>>c;
    string str(c);
    str=c;
    int len = strlen(c);
    int sq = pow(len,0.5);
    for(int i = sq; i>0; i-=1){
      for (int j = i-1; j<len; j+=sq){
        cout<<str[j];
      }
    }
    cout<<"\n";
  }
  return 0;
}
