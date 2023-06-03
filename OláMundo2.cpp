#include <iostream>

int main()
{
    // sobre a variável const, serve para tornar uma variável
    // em valor singular, imutável, e que nunca vai mudar, não importa o método,
    // isto serve para segurança, e a única função dela vai ser só pra ser exibida.

    const double pi = 3.14159;

    // Digamos que alguém mude o valor de uma variável:
    // pi = 73.940;
    double x = 10.49;
    double y = 8.8990;
    double sum = pi + x + y;
    std::cout << sum << std::endl
              << "Opa, tudo bem?";
    // Note que o valor final da conta será diferente: de 22.5306 para 93.329.
    // Para resolver isso, tem como dar o nome de const para pi, então o vlaor jamais poderá
    // ser alterado.

    return 0;
}