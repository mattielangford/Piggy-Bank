#include <iostream>

int main() {
  int pesos;
  int reais;
  int soles;
  int dollars;
  
  std::cout << "Enter number of Colombian Pesos:\n";
  std::cin >> pesos;
  std::cout << "Enter number of reais: \n";
  std::cin >> reais;
  std::cout << "Enter number of soles: \n";
  std::cin >> soles;
  
  dollars = (0.052*pesos) + (0.26*reais) +(0.3*soles);
  std::cout << "You have " << dollars << " US dollars.\n";
}