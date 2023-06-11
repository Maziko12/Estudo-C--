#include <iostream>
using namespace std;

int main ()
{
	cout << "Olá, como vai? Me diga dois números que eu te direi os resultados.";
	cout << "\n--------------_------------------------";
	int n1;
	cout << "\nVamos começar!\nDigíte um número.\nR: ";
	cin >> n1;
	
	int n2;
	cout << "\nDigíte outro número.\nR: ";
	cin >> n2;
	
	int soma = n1 + n2;
	int subtracao = n1 - n2;
	int multiplicacao = n1 * n2;
	int divisao = n1 / n2;
	int resto = n1 % n2;
	
	cout << "\n-------------------------------------------_---------\n";
	cout << "Soma: " << soma << "\nSubtração: " << subtracao;
	cout << "\nMultiplicação: " << multiplicacao << "\nDivisão: " << divisao << "\nResto da divisão: " << resto;
	cout << "\n-------------------------------------------_---------";
	cout << "\nFIM DO PROGRAMA";
	
	return 0;
}