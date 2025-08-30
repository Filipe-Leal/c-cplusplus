#include <iostream>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "");

  //VARIAVEIS
  int valorUm = 0, valorDois = 0, valorTres = 0, auxiliar = 0;

  //ENTRADA DE DADOS
  std::cout  << "Digite o primeiro valor....: ";
  std::cin >> valorUm;
  std::cout  << "Digite o segundo valor.....: ";
  std::cin >> valorDois;
  std::cout  << "Digite o terceiro valor....: ";
  std::cin >> valorTres;

  std::cout << std::endl;

  //PROCESSAMENTO DE DADOS
  if(valorUm > valorDois){
    auxiliar = valorUm;
    valorUm = valorDois;
    valorDois = auxiliar;
  }
  if(valorDois > valorTres){
      auxiliar = valorDois;
      valorDois = valorTres;
      valorTres = auxiliar;
  }

  //SAIDA DE DADOS
  std::cout << "Primeiro valor .............: " << valorUm << std::endl;
  std::cout << "Segundo valor ..............: " << valorDois << std::endl;
  std::cout << "Tericeiro valor ............: " << valorTres << std::endl;
  return 0;
}

/*
f) Ler três valores e apresentá-los dispostos em ordem crescente. Utilizar os
conceitos de propriedade distributiva (exercício "g" do capitulo 3) e troca de
valores entre variáveis (exercício "f" do capítulo 3).
*/
