#include <iostream>//std
using namespace std; //removes use of std::
int main() {
  int tc;
  cin>>tc;
  for(int i = 0; i<tc; ++i){
    int trash;
    int num;
    scanf("%d %d",&trash,&num);
    int P = num*(num+1)/2;
    int O = num*num;
    int E = num*(num+1);
    cout<<trash<<" "<<P<<" "<<O<<" "<<E<<endl;
  }
}
