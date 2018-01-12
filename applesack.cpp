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
#include <set>
using namespace std; //removes use of 
typedef long long ll;
const long double PI= 3.141592653589793238L;
int main() {
    double n;
    int k;
    cin>>n>>k;
    int amnt = 1;
    while(n>k) {
        amnt++;
        n-=ceil(n/k);
    }
    cout<<(int)(amnt+n)<<endl;
    return 0;
}
