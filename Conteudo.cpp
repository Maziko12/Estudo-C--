#include <iostream>

int main()
{
  std::cout << "KKKKK QUE BOBÃO KKKK" std::endl;
  std::cout << "KKKKK GORDO" std::endl;
  
  std::cout << "KKKKKKKKKKK\n";
  std::cout << "QU BURROO KKKKKK\n";
  
  int x;
  x = "KKK";
  std::cout << x << std::endl;
  int sum;
  sum = x + "kk";
  std::cout << sum;

  // int (somente pra um numero inteiro)

  int x = 5;
  int y = 6;
  int sum = x + y;
  std::cout << sum << "\n" << x << "\n" << y;

  int kkkk = sum + y + x;
  std::cout << "\n" << kkkk << std::endl;

  std::cout << "Esse programa só tem uma função, dizer se o Lian é gordo.\n";
  std::cout << "E.............." << std::endl;
  std::cout << "Siis, ele é" << std::endl;
  std::cout << "return 0;";

  // double (serve pra guardar numero decimal)

  double horas = 02.30;
  double temperatura = 21.5;
  std::cout << std::endl << horas << std::endl << temperatura << '\n';

  // char (só um caractere, uma letra em variaável)

  char TurmaDoLian = 'A';
  char Turno = 'N';
  std::cout << TurmaDoLian << '\n' << Turno;

  // booleano, serve apenas para dar um valor para uma variável, sendo true ou false, provavelmente pra ser usado depois, com outros valores.
  
  bool Jamelao = true;
  bool Gordo = true;
  bool magro = false;

  // string, método original para se criar uma variável que tenha string, diferente do Python
  // onde as strings são feitas diretamente, já podendo serem alteradas com uso de tuplas, listas e dicionários.
  
  std::string nome = "Leonardo";
  std::string idade = "21 anos";
  std::string hobbie = "Jogar";
  std::string jogo = "Rocket League";
  std::string profissões = "Programador e YouTuber.";

  // Criando uma frase de strings e prints, porém colocando de uma forma diferente, usando as próprias variáveis.
  // E isso, porque eu não sei fazer aquilo do python aqui, em c++: (f'Você tirou nota {nota}! Parabéns.').
  
  std::cout << "Olá! Meu nome é " << nome << ", eu tenho " << anos << ". Eu gosto de " << hobbie << " o jogo " << jogo << ", minhas profissões atualmente são: " << profissões;

  return 0;
}
