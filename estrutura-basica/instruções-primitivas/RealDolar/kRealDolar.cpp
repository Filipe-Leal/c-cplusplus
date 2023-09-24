#include <iostream>

// 05/08/2023
// Brasil - RJ / Rio de Janeiro
// Século 21


int main(){

  //VARIAVEIS
  double reais = 0, dolares = 0, cotacao = 4.78;

  //ENTRADA DE DADOS
  std::cout << "Digite os valores em Reais => R$";
  std::cin >> reais;

  //PROCESSAMENTO DE DADOS
  dolares = reais/cotacao;

  //SAIDA DE DADOS
  std::cout << "R$" << reais << " = US$" << dolares;


  return 0;
}
