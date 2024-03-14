#include <iostream>
using namespace std;

void Ola()
{
  // a função irá criar uma função que é essa, que vai pedir ao usuário digitar "Olá", e então vai imprimir isso.    
  std::string Hello;
  cout << "Digite você também! 'Olá'.\nR: ";
  cin >> Hello;
    
  cout << "Muito bem!!!";
}

int main ()
{
  cout << "Olá!";
  Ola();
  return 0;
}
