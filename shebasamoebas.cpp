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
int m,n;
cin>>m>>n;
char amoes[m][n+1]={};
for (int i = 0; i < m; i++){scanf("%s", amoes[i]);}
int size = m*n;
char visited[size]={};
int amnt = 0;
for (int i = 0; i < m; i++){
    for (int j = 0; j < n; j++){
        if (amoes[i][j]=='#' && !visited[i*n+j]){
            int x = i;
            int y = j;
            int val = 0;
            while (!visited[val = x * n + y]){
                visited[val] = 1;
                int brkr = 0;
                //up, down, left, right, across
                for (int a = -1; a <=1; a++){
                    for (int b = -1; b <=1;  b++){
                        if (a!=0 || b!=0){
                            int holder = (x+a)*n+(y+b);
                            if (holder<0 || holder>=size){continue;}//boundary
                            if (amoes[x+a][y+b]== '#' && !visited[holder]){
                              x += a;
                              y += b;
                              brkr = 1;
                            }
                        }
                        if (brkr){break;}
                    }
                    if (brkr){break;}
                }
            }
          amnt++;
        }
    }
}
cout<<amnt<<endl;
return 0;
}
