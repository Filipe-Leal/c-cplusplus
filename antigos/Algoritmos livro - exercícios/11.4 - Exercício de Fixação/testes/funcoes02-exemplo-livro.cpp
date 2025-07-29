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
  std::cout << "Rotina de ADI��O" << "\n";
  std::cout <<  "Entre com um Primeiro Valor: ";
  std::cin >> numeroUm ;
  std::cout <<  "Entre com um Segundo Valor: ";
  std::cin >> numeroDois ;
  resultado = numeroUm+numeroDois;
  std::cout << "A ADI��O do Primeiro valor com o Segundo � = " << resultado << "\n";
  std::cout << "\n";
}

void subtracao(){
  //VARIAVEIS
  double numeroUm,
      numeroDois,
      resultado;

  std::cout << "\n";
  std::cout << "Rotina de SUBTRA��O" << "\n";
  std::cout <<  "Entre com um Primeiro Valor: ";
  std::cin >> numeroUm ;
  std::cout <<  "Entre com um Segundo Valor: ";
  std::cin >> numeroDois ;
  resultado = numeroUm-numeroDois;
  std::cout << "A SUBTRA��O do Primeiro valor com o Segundo � = " << resultado << "\n";
  std::cout << "\n";
}

void multiplicacao(){
  //VARIAVEIS
  double numeroUm,
      numeroDois,
      resultado;

  std::cout << "\n";
  std::cout << "Rotina de MULTIPLICA��O" << "\n";
  std::cout <<  "Entre com um Primeiro Valor: ";
  std::cin >> numeroUm ;
  std::cout <<  "Entre com um Segundo Valor: ";
  std::cin >> numeroDois ;
  resultado = numeroUm*numeroDois;
  std::cout << "A MULTIPLICA��O do Primeiro valor com o Segundo � = " << resultado << "\n";
  std::cout << "\n";
}

void divisao(){
  //VARIAVEIS
  double numeroUm,
      numeroDois,
      resultado;

  std::cout << "\n";
  std::cout << "Rotina de DIVIS�O" << "\n";
  std::cout <<  "Entre com um Primeiro Valor: ";
  std::cin >> numeroUm ;
  std::cout <<  "Entre com um Segundo Valor: ";
  std::cin >> numeroDois ;
  resultado = numeroUm/numeroDois;
  std::cout << "A DIVIS�O do Primeiro valor com o Segundo � = " << resultado << "\n";
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
    std::cout << "  ESCOLHA UMA DAS OP��ES" << std::endl;
    std::cout << "[1] - Adi��o" << std::endl;
    std::cout << "[2] - SubTra��o" << std::endl;
    std::cout << "[3] - Multiplica��o" << std::endl;
    std::cout << "[4] - Divis�o" << std::endl;
    std::cout << "[5] - Fim de Programa" << std::endl;
    std::cout << std::endl;
    std::cout << "ESCOLHA UMA OP��O => ";
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
        std::cout << "Digite um valor v�lido" << "\n";
        std::cout << "\n";
    }//SWITCH-CASE
  }

  return 0;
}
