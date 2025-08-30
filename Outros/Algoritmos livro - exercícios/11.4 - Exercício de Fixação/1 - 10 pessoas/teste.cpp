#include<iostream>
#include<locale.h>
#include<string.h>

//ESTRUTURA DE DADOS DE PESSOAS
//struct
struct pessoas{
  char nome[100];
  char telefone[13];
  char endereco[100];
};

//VARIAVEIS GLOBAIS
pessoas dadosPessoas[3];
pessoas auxiliarTrocador;

int quantidadePessoas = sizeof(dadosPessoas)/sizeof(dadosPessoas[0]);

//FIM VARIAVEIS GLOBAIS



int main(){
  setlocale(LC_ALL, "");

  //VARIAVEIS
  bool parada = false;
  char opcao[0];


  //TELA DE ESCOLHA
  while(parada != true){
    std::cout << " Escolha uma opção" << std::endl;
    std::cout << "[1] Registre 10 pessoas" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Digite uma opção => ";
    std::cin.get(opcao[0]);
    std::cin.ignore();

    switch(opcao[0]){
      case '1':
        for(int i=0 ; i<quantidadePessoas ; i++){
          std::cout << "Digite o nome da pessoa............: ";
          std::cin.get(dadosPessoas[i].nome, 100);
          std::cin.ignore();

          std::cout << "Digite o telefone da pessoa........: ";
          std::cin.get(dadosPessoas[i].telefone, 100);
          std::cin.ignore();

          std::cout << "Digite o endereço da pessoa........: ";
          std::cin.get(dadosPessoas[i].endereco, 100);
          std::cin.ignore();

          std::cout << std::endl;

        }//for
      break;


      case '3':

      break;


    }//switch
  }//while



}
