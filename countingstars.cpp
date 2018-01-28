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
#include <unordered_set>//sets like python4
#include <set>
using namespace std; //removes use of std::
typedef long long ll;
typedef long double ld;
const long double PI= 3.141592653589793238L;
char board[1001][1001];
void floodF(int x,int y){
  if (x>1000 || x<0) return;
  if (y>1000 || y<0) return;
  if(board[x][y] == '-'){
    board[x][y]='#';
    floodF(x+1,y);
    floodF(x,y+1);
    floodF(x-1,y);
    floodF(x,y-1);
  }
}
int main(){
  int r,c;
  int tc = 1;
  while (scanf("%d %d",&r,&c)==2){
    cin.ignore();
    memset(board,'\0', sizeof(char)*1001*1001); 
    string R="";
    for (int i = 0; i<r; i++){
      getline(cin,R);
      for (int j = 0; j<c; j++){
        board[i][j]=R.at(j);
      }
    }
    int amnt = 0;
    int X = 0; int Y = 0;
    while (X<r && board[X][Y]!='\0'){
      if (board[X][Y]=='-'){
        amnt++;
        floodF(X,Y);
      }
      Y++;
      if (Y%c==0){
        X++;
        Y=0;
      }
    }
    cout<<"Case "<<tc<<": "<<amnt<<endl;
    tc++;
  }
  return 0;
}
