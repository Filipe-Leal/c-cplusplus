#include<iostream>
#include<windows.h>

int main(){
  SetConsoleOutputCP(CP_UTF8);

  //VARIAVEIS
  float cotacaoDolar, quantidadeDolar, valorReal; 


  //ENTRADA DE DADOS
  std::cout << "Digite a cotação do dolar......: R$";
  std::cin >> cotacaoDolar;

  std::cout << "" << std::endl;

  std::cout << "Digite a quantidade em Dolar...: U$";
  std::cin >> quantidadeDolar;

  //PROCESSAMENTO DE DADOS
  valorReal = cotacaoDolar*quantidadeDolar;

   std::cout << "" << std::endl;

  //SAIDA DE DADOS
  std::cout << "Valor em reais.................: R$" << valorReal << std::endl;

  return 0;
}

/*
k) Elaborar um programa que efetue a apresentação do valor da conversão
em real (R$) de um valor lido em dólar (US$). O programa deverá solicitar o
valor da cotação do dólar e também a quantidade de dólares disponível com
o usuário.
*/