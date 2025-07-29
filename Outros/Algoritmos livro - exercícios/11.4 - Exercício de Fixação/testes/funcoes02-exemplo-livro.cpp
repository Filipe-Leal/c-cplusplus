#include<iostream>
#include<locale.h>
#include<string.h>

//ROTINAS
void adicao(){
  //VARIAVEIS
  double numeroUm,
      numeroDois,
      resultado;

  std::cout << "\n";
  std::cout << "Rotina de ADIÇÃO" << "\n";
  std::cout <<  "Entre com um Primeiro Valor: ";
  std::cin >> numeroUm ;
  std::cout <<  "Entre com um Segundo Valor: ";
  std::cin >> numeroDois ;
  resultado = numeroUm+numeroDois;
  std::cout << "A ADIÇÃO do Primeiro valor com o Segundo é = " << resultado << "\n";
  std::cout << "\n";
}

void subtracao(){
  //VARIAVEIS
  double numeroUm,
      numeroDois,
      resultado;

  std::cout << "\n";
  std::cout << "Rotina de SUBTRAÇÃO" << "\n";
  std::cout <<  "Entre com um Primeiro Valor: ";
  std::cin >> numeroUm ;
  std::cout <<  "Entre com um Segundo Valor: ";
  std::cin >> numeroDois ;
  resultado = numeroUm-numeroDois;
  std::cout << "A SUBTRAÇÃO do Primeiro valor com o Segundo é = " << resultado << "\n";
  std::cout << "\n";
}

void multiplicacao(){
  //VARIAVEIS
  double numeroUm,
      numeroDois,
      resultado;

  std::cout << "\n";
  std::cout << "Rotina de MULTIPLICAÇÃO" << "\n";
  std::cout <<  "Entre com um Primeiro Valor: ";
  std::cin >> numeroUm ;
  std::cout <<  "Entre com um Segundo Valor: ";
  std::cin >> numeroDois ;
  resultado = numeroUm*numeroDois;
  std::cout << "A MULTIPLICAÇÃO do Primeiro valor com o Segundo é = " << resultado << "\n";
  std::cout << "\n";
}

void divisao(){
  //VARIAVEIS
  double numeroUm,
      numeroDois,
      resultado;

  std::cout << "\n";
  std::cout << "Rotina de DIVISÃO" << "\n";
  std::cout <<  "Entre com um Primeiro Valor: ";
  std::cin >> numeroUm ;
  std::cout <<  "Entre com um Segundo Valor: ";
  std::cin >> numeroDois ;
  resultado = numeroUm/numeroDois;
  std::cout << "A DIVISÃO do Primeiro valor com o Segundo é = " << resultado << "\n";
  std::cout << "\n";
}
//FIM ROTINAS

//PROTOTIPANDO ROTINAS
void adicao();
void subtracao();
void multiplicacao();
void divisao();

int main(){
  setlocale(LC_ALL, "");

  //VARIAVEIS
  char opcao[0];
  bool parada = false;

  //TELA DE ESCOLHAS E CASO ESCOLHA
  opcao[0] = '0';
  while(parada!=false){
    //TELA DE ESCOLHAS
    std::cout << "  ESCOLHA UMA DAS OPÇÕES" << std::endl;
    std::cout << "[1] - Adição" << std::endl;
    std::cout << "[2] - SubTração" << std::endl;
    std::cout << "[3] - Multiplicação" << std::endl;
    std::cout << "[4] - Divisão" << std::endl;
    std::cout << "[5] - Fim de Programa" << std::endl;
    std::cout << std::endl;
    std::cout << "ESCOLHA UMA OPÇÃO => ";
    std::cin.get(opcao[0]);
    std::cin.ignore();

    system("cls||clear");

    //CASO ESCOLHA
    switch(opcao[0]){
      case '1':
        adicao();
        std::cin.ignore();
      break;

      case '2':
        subtracao();
        std::cin.ignore();
      break;

      case '3':
        multiplicacao();
        std::cin.ignore();
      break;

      case '4':
        divisao();
        std::cin.ignore();
      break;

      //PARA DO PROGRAMA
      case '5':
        parada = false;
      break;

      default:
        std::cout << "\n";
        std::cout << "Digite um valor válido" << "\n";
        std::cout << "\n";
    }//SWITCH-CASE
  }

  return 0;
}
