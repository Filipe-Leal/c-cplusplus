#include<iostream>
#include<locale.h>
#include<string.h>

//INCOMPLETO

struct agenda{
       char nome[50];
       char endereco[50];
       char telefone[11];
};

int main(){
  setlocale(LC_ALL, "");

  //VARIAVEIS
  agenda cadastroAgenda[3];
  agenda auxiliarTrocador;
  int i, tamanhoVetor = sizeof(cadastroAgenda)/sizeof(cadastroAgenda[0]);
  char resposta[4], nomePesquisa[50];
  bool acha;


  //ENTRADA DE DADOS
  std::cout << "Cadastro de Pessoas na agenda." << std::endl;
  for(i=0 ; i < tamanhoVetor ; i++){
    std::cout << "Nome: ";
 //   std::cin.ignore(); //limpar o caractere de nova linha do buffer de entrada '\n'
    std::cin.get(cadastroAgenda[i].nome, 50);

    std::cout << "Número: ";
    std::cin >> cadastroAgenda[i].telefone;

    std::cout << "Endereço: ";
    std::cin.ignore(); //limpa o caracterer de nova linha do buffer de entrada '\n'
    std::cin.get(cadastroAgenda[i].endereco, 50);

    std::cout << std::endl;
    std::cin.ignore(); //limpa o caracterer de nova linha do buffer de entrada '\n'

  }//for - entrada

  //ORDENACAO
  for(i=0 ; i < tamanhoVetor ; i++){
    for(int j=i ; j < tamanhoVetor ; j++){
      if(strcmp(cadastroAgenda[i].nome, cadastroAgenda[j].nome) > 0){
        auxiliarTrocador = cadastroAgenda[j];
        cadastroAgenda[j] = cadastroAgenda[i];
        cadastroAgenda[i] = auxiliarTrocador;
      }//if
    }//for j
  }//for - ordenacao

  std::cout << std::endl;

  //PESQUISA
  std::cout << "--Pesquisa--" << std::endl;
  strcpy(resposta, "SIM");
  while(strcmp(resposta, "SIM") == 0 || strcmp(resposta, "sim")  == 0 || strcmp(resposta, "s")  == 0 || strcmp(resposta, "S")  == 0){
    std::cout << "Digite o nome: ";
    std::cin.getline(nomePesquisa, 50);
   //std::cout << nomePesquisa; saida teste

    acha = false;
    i=0;
    while(i <= tamanhoVetor && acha == false){
      if(strcmp(nomePesquisa, cadastroAgenda[i].nome) == 0){
        acha = true;
      }else{
        i++;
      }//if - busca na agenda
    }//while - busca na agenda

    //ACHOU
    if(acha == true){
      std::cout << std::endl;
      std::cout << "Nome: " << cadastroAgenda[i].nome << std::endl;
      std::cout << "Telefone: " << cadastroAgenda[i].telefone << std::endl;
      std::cout << "Endereço: " << cadastroAgenda[i].endereco << std::endl;
      std::cout << "------------" << std::endl;
    }else{
      std::cout << "Não existe";
    }//if - acha = true

    std::cout << std::endl;

    std::cout << "Deseja continuar? S/N => ";
    std::cin.get(resposta, 4);
    std::cin.ignore();

  }//while - pesquisa

  std::cout << std::endl;

  //SAIDA DE TODOS OS DADOS
  std::cout << "---Todos os dados---" << std::endl;
  for(i=0 ; i< tamanhoVetor ; i++){
    std::cout << "Nome: " << cadastroAgenda[i].nome << std::endl;
    std::cout << "Telefone: " << cadastroAgenda[i].telefone << std::endl;
    std::cout << "Endereço: " << cadastroAgenda[i].endereco << std::endl;

    std::cout << std::endl;

  }//for saida de tudo
  std::cout << "--------------------" << std::endl;

  return 0;
}
