#include <iostream>
#include <cmath>

namespace first {
  int x = 1;
  int sum = 62 * 7 / 2;
}

namespace second {
  int x = 2;
}

using std::cout;

int main() {
  using namespace first;
  int x = 0;
  int sum = x + first::x + second::x;
  cout << first::x;
  cout << sum << " Esse é o resultado";
  cout << second::x;
  
  //Eu apenas estou começando ainda em C++, então esse código vai estar estranho kkkk.


  return 0;
}