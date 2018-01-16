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
#include <unordered_set>//sets like python
using namespace std; //removes use of 
typedef long long ll;
const long double PI= 3.141592653589793238L;
long long  b,i,x,v,c,ans,anc;
int j,k,a[20];
int main(){
  int tc;
  cin>>tc;
  ll prev = 0;
  while (tc--){
  //creds to forums
     cin>>b;
     k=0; x=1; j=0;
     while(b!=0) {a[k]=b%10; b/=10; k++;} for (i=1; i<k; i++) x*=10; if (k==0) x=0; //cout<<x<<" ";
  k--;
     while(x!=0) {
      v=45*(x/10)*k;
      c=(a[k]*(a[k]-1)/2)*x+v*a[k]+a[k];
      ans+=j*a[k]*x+c; j+=a[k];
      x/=10; k--;
  
     }  //cout<<ans<<" ";
     ans-=j;
   cin>>b;
    k=0; x=1; j=0;
     while(b!=0) {a[k]=b%10; b/=10; k++;} for (i=1; i<k; i++) x*=10; //cout<<x;
  k--;
     while(x!=0) {
      v=45*(x/10)*k; //cout<<"v=="<<v<<" ";
      c=(a[k]*(a[k]-1)/2)*x+v*a[k]+a[k]; //cout<<"c=="<<c<<" ";
      anc+=j*a[k]*x+c;  j+=a[k]; //cout<<"anc=="<<anc<<" ";
      x/=10; k--; //cout<<endl;
  
     }
     long long amnt = anc-ans;
    cout<<amnt-prev<<endl;
    prev = amnt;
  }
  return 0;
}
