#include <iostream>
#include <locale.h>

int main(){

  //LOCAL DO SISTEMA
  setlocale(LC_ALL, "");

  //VARIAVEIS
  int valores = 0;

  //ENTRADA DE DADOS
  std::cout << "Digite um valor.....: ";
  std::cin >> valores;

  //PROCESSSAMENTO DE DADOS
  if(valores < 0){
      valores = -valores;
  }

  std::cout << std::endl;

  //SAIDA DE DADOS
  std::cout << "Valor...............: " << valores << std::endl;

  return 0;
}

/*

b) Ler um valor numérico inteiro positivo ou negativo e apresentar o valor
lido como sendo um valor positivo, ou seja, se o valor lido for menor ou igual
a zero, ele deve ser multiplicado por -1.

*/
