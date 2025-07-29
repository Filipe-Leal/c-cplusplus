#include<iostream>
#include<locale.h>

//VARIAVEIS GLOBAIS
int valorRecebido,
    valorConvertido;

void decimalBinario(){
  std::cout << "Digite o valor em Decimal => ";
  std::cin >> valorRecebido ;

  valorConvertido =  valorRecebido\2;


}//decimalBinario

int main(){
  setlocale(LC_ALL, "");

  //VARIAVEIS
  bool parada = false;
  char opcao[0];

  while(paradaa != true){
    std::cout << " Escolha uma opção" << std::endl;
    std::cout << "[1] Decimal para Binário" << std::endl;
    std::cout << "[2] Decimal para Octal" << std::endl;
    std::cout << "[2] Decimal para Hexadecimal" << std::endl;
    std::cout << "Digite uma opção => ";
    std::cin.get(opcao[0]);
    std::cin.ignore();

    switch(opcao[0]){
      case '1':

      break;

    }//switch


  }//while

  return 0;
}
