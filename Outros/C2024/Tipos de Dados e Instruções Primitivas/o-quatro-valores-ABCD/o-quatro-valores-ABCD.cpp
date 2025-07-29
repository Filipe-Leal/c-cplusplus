#include<iostream>
#include<windows.h>

int main(){
  SetConsoleOutputCP(CP_UTF8);

  //VARIAVEIS
  short int valorA, valorB, valorC, valorD, somaP, somaS;

  //ENTRADA DE DADOS
  std::cout << "Digite o valor de A...: ";
  std::cin >> valorA;
  std::cout << "Digite o valor de B...: ";
  std::cin >> valorB; 
  std::cout << "Digite o valor de C...: ";
  std::cin >> valorC; 
  std::cout << "Digite o valor de D...: ";
  std::cin >> valorD; 

  //PROCESSAMENTO DE DADOS
  somaP = valorA+valorC;
  somaS = valorB+valorD;

  std::cout << "" << std::endl;

  //SAIDA DE DADOS
  std::cout << "Soma P de A + C......:" << somaP << std::endl;

  std::cout << "Soma S de B + D......:" << somaS << std::endl;
  return 0;
}

/*o) Elaborar um programa de computador que efetue a leitura de quatro
valores inteiros (variáveis A, B, C e D). Ao final o programa deve apresentar
o resultado do produto (variável P) do primeiro com o terceiro valor, e o
resultado da soma (variável S) do segundo com o quarto valor.*/