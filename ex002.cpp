#include <iostream>
using namespace std;

/*Escreva uma função chamada soma que recebe dois números inteiros como parâmetros e retorna a soma dos dois números.*/

int soma(int num, int num2)
{
  return num + num2;
}
int main ()
{
  cout << "Olá, como vai? Seja bem-vindo(a) ao meu programa!" << endl;
  cout << "---------------_---------------" << endl;

  int num;
  cout << endl << "\nVocê poderia me dizer dois números? Eu te direi a soma deles!\nPrimeiro número: ";
  cin >> num;

  int num2;
  cout << "Ok! Agora poderia me dizer mais um número?\nO anterior foi uma ótima escolha!\n\nSegundo número: ";
  cin >> num2;

  int resultado = soma(num, num2);
  
  cout << "O valor da soma deu: " << resultado << endl;
  cout << "Obrigado! Até uma próxima vez!" << endl;
  return 0;
}