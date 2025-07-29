#include<iostream>
#include<locale.h>
#include<string.h>

struct alunos{
        char nome[100];
        double notas[4];
        double media;
};


int main(){
  setlocale(LC_ALL, "");

  //VARIAVEIS
  alunos cadastroAlunos[3];
  alunos auxiliarTrocador;


  int i, opcaoEscolhida, quantidadeAlunos = sizeof(cadastroAlunos)/sizeof(cadastroAlunos[0]);
  bool parada = true, cadastrou = false, acha;
  char resposta[4], nomePesquisa[100];
  //FIM VARIAVEIS


  while(parada != false){

    //TELA
    std::cout << "  Escolha uma opção" << std::endl;
    std::cout << std::endl;
    std::cout << "[0] Cadastrar 20 alunos" << std::endl;
    std::cout << "[1] Pesquisar alunos" << std::endl;
    std::cout << "[2] Apresentar todos os registros" << std::endl;
    std::cout << "[3] Sair do programa" << std::endl;
    std::cout << std::endl;
    std::cout << "=> "; std::cin >> opcaoEscolhida;
    //FIM TELA

    system("cls||clear");

    switch(opcaoEscolhida){
      case 0:

   /*     std::cout << "OPCAO 0" << std::endl;
        std::cout << std::endl;*/

        //CADASTRAR ALUNOS
        std::cout << "Cadastro de alunos." << std::endl;
        for(i=0 ; i<quantidadeAlunos ; i++){
          std::cout << i+1 << "Aluno." << std::endl;
          std::cout << "Nome..................: " ;
          std::cin.ignore();
          std::cin.get(cadastroAlunos[i].nome, 100);

          //NOTAS
          for(int j=0 ; j<=3 ; j++){
              std::cout << j+1 << " Bimestre Nota.......: ";
              std::cin >> cadastroAlunos[i].notas[j];

              //CALCULO MEDIA
              cadastroAlunos[i].media += cadastroAlunos[i].notas[j];
              //FIM CALCULO MEDIA
          }//for notas

          //CALCULO MEDIA
          cadastroAlunos[i].media = cadastroAlunos[i].media/4;
          //FIM CALCULO MEDIA



          std::cout << std::endl;
        }//for
        //FIM CADASTRO

        //ORDENACAO
        for(i=0 ; i<quantidadeAlunos ; i++){
          for(int j=i ; j<quantidadeAlunos ; j++){
            if(strcmp(cadastroAlunos[i].nome, cadastroAlunos[j].nome) > 0){
              auxiliarTrocador = cadastroAlunos[i];
              cadastroAlunos[i] = cadastroAlunos[j];
              cadastroAlunos[j] = auxiliarTrocador;
            }//if
          }//for j
        }//for i
        //FIM ORDENACAO

        std::cout << std::endl;

        cadastrou = true;

        break;

      case 1:
        if(cadastrou == true){
          //PESQUISA
          strcpy(resposta, "S");
          while(strcmp(resposta, "S") == 0){
            std::cin.ignore();
            std::cout << "Digite o nome que deseja pesquisar......: ";
            std::cin.get(nomePesquisa, 100);


            acha = false;
            i=0;

            while(i<=quantidadeAlunos && acha == false){
              if(strcmp(nomePesquisa, cadastroAlunos[i].nome) == 0){
                acha = true;
              }else{
                i++;
              }//if
            }//while

            //SAIDA PESQUISA
            if(acha==true){
              std::cout << "Nome..................: " << cadastroAlunos[i].nome << std::endl;

              for(int j=0 ; j<4 ; j++){
                std::cout << j+1 << " Bimestre Nota.......: " <<  cadastroAlunos[i].notas[j] << std::endl;
              }//for

              //SAIDA MEDIA
              std::cout << "Média.................: " << cadastroAlunos[i].media << std::endl;
              //FIM SAIDA MEDIA

              std::cout << std::endl;

            }else{
              std::cout << std::endl;
              std::cout << "NÃO EXISTE!";
              std::cout << std::endl;
            }//if
            //FIM SAIDA PESQUISA

            std::cout << std::endl;

            std::cin.ignore();
            std::cout << "Deseja continuar? S/N => ";
            std::cin.get(resposta, 4);

            std::cout << std::endl;
          }//while
          //FIM PESQUISA
        }else{
          std::cout << "Cadastre alunos primeiro.";
          std::cout << std::endl;
        }//if
        break;

      case 2:
        if(cadastrou == true){
          //SAIDA REGISTROS
          for(i=0 ; i<quantidadeAlunos ; i++){
            std::cout << i+1 << "Aluno." << std::endl;
            std::cout << "Nome..................: " << cadastroAlunos[i].nome << std::endl;

            for(int j=0 ; j<4 ; j++){
              std::cout << j+1 << " Bimestre Nota.......: " <<  cadastroAlunos[i].notas[j] << std::endl;
            }//for

            //SAIDA MEDIA
            std::cout << "Média.................: " << cadastroAlunos[i].media << std::endl;
            //FIM SAIDA MEDIA

            std::cout << std::endl;

          }//for
          //FIM SAIDA REGISTROS
          break;
        }else{
          std::cout << "Cadastre alunos primeiro.";
          std::cout << std::endl;
          break;
        }
        break;


      case 3:
        parada = false;
        break;

      default:
        std::cout << "ESCOLHA UMA OPÇAO VALIDA";
        std::cout << std::endl;
        break;

    }//switch case

  }//while

  return 0;
}
