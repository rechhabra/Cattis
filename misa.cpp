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
char seat[10001][10001];
int amntP(int r, int c, int x, int y){
  int amnt = 0;
  if (x-1>=0 && y-1>=0 && seat[x-1][y-1]=='o'){
    amnt++;
  }
  if (y-1>=0 && seat[x][y-1]=='o'){
    amnt++;
  }
  if (x+1<r && y-1>=0 && seat[x+1][y-1]=='o'){
    amnt++;
  }
  if (x-1>=0 && seat[x-1][y]=='o'){
    amnt++;
  }
  if (x+1<r && seat[x+1][y]=='o'){
    amnt++;
  }
  if (x-1>=0 && y+1<c && seat[x-1][y+1]=='o'){
    amnt++;
  }
  if (y+1<c && seat[x][y+1]=='o'){
    amnt++;
  }
  if (x+1<r && y+1<c && seat[x+1][y+1]=='o'){
    amnt++;
  }
  return amnt;
}
int main(){
  int r,c;
  scanf("%d %d",&r,&c);
  //char seat[r][c];
  for (int i = 0; i<r; i++){
    scanf("%s",seat[i]);
  }
  int maxAmnt = 0;
  int MR=-1;
  int MC = 0;
  for (int a = 0; a<r; a++){
    for (int b = 0; b<c; b++){
      if (seat[a][b]=='.'){
        int num = amntP(r,c,a,b);
        if (num>maxAmnt){
          MR = a;
          MC = b;
          maxAmnt=num;
        }
      }
    }
  }
  if (MR>-1){
    seat[MR][MC]='o';
  }
  maxAmnt = 0;
  for (int a = 0; a<r; a++){
    for (int b = 0; b<c; b++){
      if (seat[a][b]=='o'){
        maxAmnt+=amntP(r,c,a,b);
      }
    }
  }
  cout<<maxAmnt/2<<endl;
  return 0;
}
