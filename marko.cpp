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
  int tc;
  vector<string> letters;
  cin>>tc;
  for (int i = 0; i<tc; ++i){
    char fake[1001];
    scanf("%s",fake);
    string str(fake);
    str = fake;
    letters.push_back(str);
  }
  char need[1001];
  scanf("%s",need);
  int amnt = 0;
  for (int i = 0; i<letters.size(); i++){
    int succ = 1;
    for (int j = 0; j<letters[i].length(); j++){
      if (need[j]=='2'){
        if (letters[i][j]!='a' and letters[i][j]!='b' and letters[i][j]!='c'){succ=0; break;}
      }
            if (need[j]=='3'){
        if (letters[i][j]!='d' and letters[i][j]!='e' and letters[i][j]!='f'){succ=0; break;}
      }
            if (need[j]=='4'){
        if (letters[i][j]!='g' and letters[i][j]!='h' and letters[i][j]!='i'){succ=0; break;}
      }
            if (need[j]=='5'){
        if (letters[i][j]!='j' and letters[i][j]!='k' and letters[i][j]!='l'){succ=0; break;}
      }
            if (need[j]=='6'){
        if (letters[i][j]!='m' and letters[i][j]!='n' and letters[i][j]!='o'){succ=0; break;}
      }
            if (need[j]=='7'){
        if (letters[i][j]!='p' and letters[i][j]!='q' and letters[i][j]!='r' and letters[i][j]!='s'){succ=0; break;}
      }
            if (need[j]=='8'){
        if (letters[i][j]!='t' and letters[i][j]!='u' and letters[i][j]!='v'){succ=0; break;}
      }
            if (need[j]=='9'){
        if (letters[i][j]!='w' and letters[i][j]!='x' and letters[i][j]!='y' and letters[i][j]!='z'){succ=0; break;}
      }
    }
    if (succ){amnt++;}
  }
  cout<<amnt<<endl;
  return 0;
}
