#include <iostream>

int main() {
  int need;
  std::cin >> need;
  int numA = 1;
  int numB = 0;
  for(int i = 0; i<need; ++i){
    int t_numA=numA;
    numA=numB;
    numB+=t_numA;
  }
  std::cout<< numA<<" "<<numB;
}
