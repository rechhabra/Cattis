#include <iostream>//std
#include <cstring>//strlen
#include <algorithm>//math stuff
#include <math.h>//pow,ceil,etc.
#include <vector>//vector
#include <string>//string opers
#include <stack> //stack list
using namespace std; //removes use of std::
int main(){
   string line;
    stack<int> s;//work on use of stacks
    int maxL = 0;
    int amnt = 0;
    while(getline(cin, line)){
        int i = line.size();
        if(i!=0) {
            s.push(i);
            maxL = max(i,maxL);
        }
    }
    s.pop();
    while(!s.empty()) {
        int i = s.top();
        s.pop();
        amnt+=pow((maxL - i),2);
    }
    cout<<amnt;
    return 0;
}
