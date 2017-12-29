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
void show(int a, int b, int c, int d, int e){
  cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
}
int main() {
  int a,b,c,d,e;
  scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
  while (a!=1 or b!=2 or c!=3 or d!=4 or e!=5){
    if (a>b){
      int t_a = a;
      a = b;
      b = t_a;
      show(a,b,c,d,e);
    }
    if (b>c){
      int t_b = b;
      b = c;
      c = t_b;
      show(a,b,c,d,e); 
    }
    if (c>d){
      int t_c = c;
      c = d;
      d = t_c;
      show(a,b,c,d,e);
    }
    if (d>e){
      int t_d = d;
      d = e;
      e = t_d;
      show(a,b,c,d,e);
    }
  }
  return 0;
}
