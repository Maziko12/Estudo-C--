#include <iostream>

namespace first {
  int x = 1;
}

namespace second {
  int x = 2;
}

using std::cout;

int main() {
  int x = 0;
  int sum = x + first::x + second::x;
  cout << first::x << std::endl;
  cout << sum << " Esse é o resultado";

  return 0;
}