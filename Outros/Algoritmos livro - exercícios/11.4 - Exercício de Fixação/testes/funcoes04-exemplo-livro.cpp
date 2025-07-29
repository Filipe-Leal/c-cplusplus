#include<iostream>
#include<locale.h>

//VARIAVEIS GLOBAIS
  int a;
  int b;


//FUNCOES E PROCEDIMENTOS
void troca(){
  //VARIAVEIS LOCAIS DA FUNCAO troca()
  int x;

  x = a;
  a = b;
  b = x;
 
}

//PROTROTIPAR A FUNCOES E  PROCEDIMENTOS
void troca();


//FUNCAO PRINCIPAL DO PROGRAMA
int main (){
  setlocale(LC_ALL, "");

  
  std::cout << "Digite o valor de A ";
  std::cin >> a;

  std::cout << "Digite o valor de B ";
  std::cin >> b;
  
  troca();

  std::cout << "O valor de A é: " << a << "\n";
  std::cout << "O valor de B é: " << b << "\n";

  return 0;
}


