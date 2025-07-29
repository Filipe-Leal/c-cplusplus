//TRANSFORMAR SUB-ROTINAS EM OUTRAS SUB-ROTINAS, COM O INTUITO DE MELHORAR A LEITURA DO CÓDIGO
//C++ NÃO PERMITE FUNCOES DENTRO DE OUTRAS FUNCOES, SENDO ASSIM, TEREI QUE CRIAR VARIÁVEIS GLOBAIS PARA RESOLUÇÃO DO ALGORITO DA PÁGINA 188

#include<iostream>
#include<locale.h>

//VARIAVEIS GLOBAIS
char opcao;
double r, a, b;

//SUB-ROTINAS
void entrada(){
  std::cout << "Digite o valor para A: ";
  std::cin >> a;
  std::cout << "Digite o valor para B: ";
  std::cin >> b;
}


void saida(){
  std::cout << "O resultado de A com B é = " << r;  
}


void rotsoma(){
  std::cout << "Rotina de adição" << std::endl;
  entrada();
  r = a + b;
  saida();
  std::cout << std::endl;
}


void rotsubtracao(){
  std::cout << "Rotina de subtração" << std::endl;
  entrada();
  r = a - b;
  saida();
  std::cout << std::endl;
}


void rotmultiplicacao(){
  std::cout << "Rotina de multiplicação" << std::endl;
  entrada();
  r = a * b;
  saida();
  std::cout << std::endl;
}


void rotdivisao(){
  std::cout << "Rotina de Divisão" << std::endl;
  entrada();
  r = a / b;
  saida();
  std::cout << std::endl;
}


//PROTOTOIPAR SUB-ROTINAS
void entrada();
void saida();
void rotsoma();
void rotsubtracao();
void rotmultiplicacao();
void rotdivisao();


//FUNCAO PRINCIPAL DO PROGRAMA
int main(){
  //VARIAVEIS
  bool parada = false;

  opcao = '0';

  while(parada != true){
    std::cout << "Escolha uma opção" << std::endl;
    std::cout << "[1] Adição" << std::endl; 
    std::cout << "[2] Subtração" << std::endl;     
    std::cout << "[3] Multiplicação" << std::endl;
    std::cout << "[4] Divisão" << std::endl;
    std::cout << "[5] Fim de programa" << std::endl; 
    std::cout << "Escolha uma opção ";
    std::cin.get(opcao);
    std::cin.ignore();

    system("cls||clear");

    switch(opcao){
      case '1':
        rotsoma();
        std::cin.ignore();    
        std::cout << "\n";
      break;  

      case '2':
        rotsubtracao();
        std::cin.ignore();
        std::cout << "\n";
      break;
      
      case '3':
        rotmultiplicacao();
        std::cin.ignore();
        std::cout << "\n";
      break;

      case '4':
        rotdivisao();
        std::cin.ignore();
        std::cout << "\n";
      break;

      case '5':
        parada = true;
      break;

      default:
        std::cout << std::endl;
        std::cout << "Digite uma opação válida" << std::endl;
        std::cout << std::endl;
      break;
    }//switch
  }//while
}//int main
