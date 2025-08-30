#include <iostream>
#include <math.h>
#include <iomanip>
#include<locale.h>

int main(){

  setlocale(LC_ALL, "");

  //VARIAVEIS
  double areaCircunferencia = 0, raio = 0;

  //ENTRADA DE DADOS
  std::cout << "Digite o Raio => ";
  std::cin >> raio;

  //PROCESSAMENTO DE DADOS
  areaCircunferencia = 3.14159*pow(raio, 2);

  //SAIDA DE DADOS
  std::cout << std::fixed << std::setprecision(2); //precisão duas casas decimais 12.99
  std::cout << "Área: " << areaCircunferencia << std::endl;

  return 0;
}
