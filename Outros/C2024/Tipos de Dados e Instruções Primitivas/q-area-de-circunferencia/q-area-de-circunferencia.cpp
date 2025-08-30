#include<iostream>
#include<windows.h>
#include<math.h>

int main(){
  SetConsoleOutputCP(CP_UTF8);

  //VARIAVEIS
  float raio, circunferencia;


  //ENTRADA DE DADOS
  std::cout << "Digite o valor do raio...: ";
  std::cin >> raio;

  //PROCESSAMENTO DE DADOS
  circunferencia = 3.14159f*pow(raio, 2);

  //SAIDA DE DADOS
  std::cout << "" << std::endl;
  std::cout << "Circunferência...........: " << circunferencia;

  return 0;
}

/*q) Elaborar um programa de computador que calcule e apresente o valor da
área de uma circunferência (variável A). Para tanto, o programa deve
solicitar o valor do raio (variável R) e fazer uso da fórmula de cálculo: A ←
3.14159 * R ↑ 2.*/