#include <iostream>
#include <chrono>


Retangulo(){
  private:
    float Base;
    float Altura;

  public:
    float setArea(float b, float a);
    {
      float Base = b;
      float Altura = a;
      float Area = b * a;
      return Area;
    }

    void getArea();
    {
      return setArea();
    }

    float setPerimeter(float Bases, float Alturas);
    {
      float Bases = Base + Base;
      float Alturas = Altura + Altura;
      float Perimeter;
      Perimeter = 2 * (Bases + Alturas);

      return Perimeter;
    }

    void getPerimeter();
    {
      return setPerimeter
    }

    int main()
    {
      std::cout << "Olá! Como vai?" << std::endl;
      std::this_thread::sleep_for(std::chrono::seconds(2))
      std::cout << "Seja bem-vindo(a) ao meu programa, hoje eu resolvi criar algo diferente, isto é, uma classe." << std::endl;
      std::this_thread::sleep_for(std::chrono::seconds(2))
      std::cout << "O objetivo dela, será calcular a Área e o Perímetro de um retângulo, será assim, eu te perguntarei duas medidas" << std::endl;
      std::cout << "e você me dirá elas, e então será imprimido tanto a Base quanto o Perímetro do retângulo!" << std::endl;
      std::this_thread::sleep_for(std::chrono::seconds(2))
      std::cout << "É isso, espero que goste!" std::endl;
      std::cout << "..." << "Beleza, vamos começar!" std::endl;
      std::this_thread::sleep_for(std::chrono::seconds(1))
      std::cout << "------------------_------------------" << std::endl;
      std::this_thread::sleep_for(std::chrono::millisecond(500))
      float num;
      std::cout << "Me fale um número com medida em metros (Ter ponto ou não). Primeiro\nVamos começar com a Base" << std::endl << "Base: ";
      std::this_thread::sleep_for(std::chrono::seconds(1))
      std::cin >> num;
      
      float num2;
      std::this_thread::sleep_for(std::chrono::seconds(1))
      std::cout << endl << "Muito bom! Agora vamos para a próxima medida." << std::endl << "Altura: ";
      std::this_thread::sleep_for(std::chrono::seconds(1))
      std::cin >> num2;

      float resultArea = setArea(num, num2);
      float resultPerimeter = setPerimeter(num, num2);

      std::this_thread::sleep_for(std::chrono::seconds(3))

      return 0;
    }
}