#include <iostream>//std
#include <algorithm>//using std::max
using namespace std; //removes use of std::
int main() {
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  cout<<max(b-a,c-b)-1;
} 
