#include <iostream>//std
using namespace std; //removes use of std::
int main() {
  while(1){
    int a,b;
    scanf("%d %d",&a,&b);
    if (a==0 and b==0){break;}
    if (a+b==13){cout<<"Never speak again."<<endl;}
    else if (a==b){cout<<"Undecided."<<endl;}
    else if (a>b){cout<<"To the convention."<<endl;}
    else{cout<<"Left beehind."<<endl;}
  }
}
