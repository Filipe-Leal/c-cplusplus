#include<iostream>
#include<string.h>
#include<locale.h>

struct agenda{
       char nome[100];
       char telefone[11];
       char endereco[100];
};

int main(){
  setlocale(LC_ALL, "");

  // VARIAVEIS
  agenda cadastroAgenda[3];
  agenda auxiliarTrocador;

  int quantidadeCadastro = sizeof(cadastroAgenda)/sizeof(cadastroAgenda[0]);
  int i=0;
  char resposta[4], nomePesquisa[100];
  bool acha;
  //FIM VARIAVEIS

  //ENTRADA DE DADOS
  std::cout << "Cadastro na agenda." << std::endl;
  for(i=0 ; i<quantidadeCadastro ; i++){
    std::cout << "Nome...........: ";
    std::cin.get(cadastroAgenda[i].nome, 100);

    std::cin.ignore();
    std::cout << "Telefone.......: ";
    std::cin.get(cadastroAgenda[i].telefone, 11);

    std::cin.ignore();
    std::cout << "Endereço.......: ";
    std::cin.get(cadastroAgenda[i].endereco, 100);

    std::cout << std::endl;
    std::cin.ignore();
  }//for
  //FIM DA ENTRADA DE DADOS


  //ORDENACAO
  for(i=0 ; i<quantidadeCadastro ; i++){
    for(int j=i ; j<quantidadeCadastro ; j++){
      if(strcmp(cadastroAgenda[i].nome, cadastroAgenda[j].nome) > 0){
        auxiliarTrocador = cadastroAgenda[i];
        cadastroAgenda[i] = cadastroAgenda[j];
        cadastroAgenda[j] = auxiliarTrocador;
      }//if
    }//for-j
  }//for-i
  //FIM ORDENACAO

  std::cout << std::endl;

  //PESQUISA
  strcpy(resposta, "SIM");

  while(strcmp(resposta, "SIM") == 0){
    for(int qntPesquisa=0; qntPesquisa < quantidadeCadastro ; qntPesquisa++){
      std::cout << std::endl;
      std::cout << "Digite o nome que deseja pesquisar => ";
      std::cin.get(nomePesquisa, 100);
      std::cin.ignore();

      acha = false;
      i=0;

      //BUSCA DO NOME
      while(i <= quantidadeCadastro && acha == false){
        if(strcmp(nomePesquisa, cadastroAgenda[i].nome) == 0){
          acha = true;
        }else{
          i++;
        }//if
      }//while
      //FIM BUSCA DO NOME

      std::cout << std::endl;

      std::cout << "Nome procurado: " << nomePesquisa << std::endl;
      //SAIDA NOME BUSCADO
      if(acha == true){
        std::cout << "Nome...........: " << cadastroAgenda[i].nome << std::endl;
        std::cout << "Telefone.......: " << cadastroAgenda[i].telefone << std::endl;
        std::cout << "Endereço.......: " << cadastroAgenda[i].endereco << std::endl;
      }else{
        std::cout << "Não existe" << std::endl;
      }//if
    }//for-10-registros

    std::cout << std::endl;

    std::cout << "Saída de todos os dados" << std::endl;

    //SAIDA TODOS OS DADOS
    for(i =0 ; i < quantidadeCadastro ; i++){
      std::cout << "Nome...........: " << cadastroAgenda[i].nome << std::endl;
        std::cout << "Telefone.......: " << cadastroAgenda[i].telefone << std::endl;
        std::cout << "Endereço.......: " << cadastroAgenda[i].endereco << std::endl;

        std::cout << std::endl;

    }
    //FIM SAIDA TODO OS DADOS

    break;
  }//while

  //FIM PESQUISA

  return 0;
}
