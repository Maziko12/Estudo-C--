#include <iostream>

int main()
{
  int correct = 8;
  int questions = 10;
  double score = (float) correct/questions * 100;

  std::cout << score << "%";
}