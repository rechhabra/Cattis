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
using namespace std; //removes use of 
const long double PI= 3.141592653589793238L;
int main(){
  int r,c,s;
  scanf("%d %d %d",&r,&c,&s);
  char bugs[r][c];
  for (int i = 0; i<r; i++){
    scanf("%s",bugs[i]);
  }
  int Arc[3];
  for (int kk = 0; kk<3; kk++){
    Arc[kk]=0;
  }
  for (int a = 1; a<=r-s+1; a++){
    for (int b = 1; b<=c-s+1; b++){
      int amnt = 0;
      for (int j = 0; j<s-2; j++){
        for (int k = 0; k<s-2; k++){
          if ((a+j>=r) || (b+k>=c)){break;}
          if (bugs[a+j][b+k]=='*'){amnt++;}
        }
      }
        if (Arc[0]<amnt){
          Arc[0]=amnt;
          Arc[1]=a-1;
          Arc[2]=b-1;
        }
      }
    }
  cout<<Arc[0]<<endl;//" "<<Arc[1]<<" "<<Arc[2]<<endl;
    bugs[Arc[1]][Arc[2]]='+';
    bugs[Arc[1]+s-1][Arc[2]+s-1]='+';
    bugs[Arc[1]+s-1][Arc[2]]='+';
    bugs[Arc[1]][Arc[2]+s-1]='+';
    for (int i = Arc[1]+1; i<Arc[1]+s-1; i++){
      bugs[i][Arc[2]]='|';
    }
    for (int i = Arc[1]+1; i<Arc[1]+s-1; i++){
      bugs[i][Arc[2]+s-1]='|';
    }
    for (int i = Arc[2]+1; i<=Arc[2]+s-2; i++){
      bugs[Arc[1]][i]='-';
    }
    for (int i = Arc[2]+1; i<=Arc[2]+s-2; i++){
      bugs[Arc[1]+s-1][i]='-';
    }
  for (int a = 0; a<r; a++){
    for (int b = 0; b<c; b++){
      cout<<bugs[a][b];
    }
    cout<<endl;
  }
  return 0;
}
