#include<iostream>
#include<locale.h>
#include<string.h>

struct funcionarios{
        long long matricula;
        char nome[100];
        double salario;
};

int main(){
  setlocale(LC_ALL, "");

  //VARIAVEIS
  funcionarios cadastrarFuncionarios[4];
  funcionarios auxiliarTrocador;
  int comeco, meio, ultimo, opcaoEscolhida=0, i=0, quantidadeFuncionarios=sizeof(cadastrarFuncionarios)/sizeof(cadastrarFuncionarios[0]);
  bool parada, cadastrou=false, achou;
  char resposta[4];
  long long pesquisaMatricula;

  //PROGRAMA
  parada = true;
  while(parada!=false){
    //OPÇOES DE ESCOLHA
    std::cout << "Escolha uma das opções." << std::endl;
    std::cout << "[0] Cadastrar 20 funcionários" << std::endl;
    std::cout << "[1] Pesquise um funcionário" << std::endl;
    std::cout << "[2] Apresentar funcionários que recebem acima de R$1.000" << std::endl;
    std::cout << "[3] Apresentar funcionários que recebem menos de R$1.000" << std::endl;
    std::cout << "[4] Apresentar funcionários que recebem igualmente R$1.000" << std::endl;
    std::cout << "[5] Sair do programa" << std::endl;
    std::cout << std::endl;
    std::cout << "-> ";
    std::cin >> opcaoEscolhida;
    std::cout << std::endl;
    system("cls||clear");
    //FIM OPCOES DE ESCOLHA

    //ESCOLHAS
    switch(opcaoEscolhida){

      case 0:
          //CADASTRAR FUNCIONARIOS E ORDENACAO
          std::cout << "Cadastrar 20 pessoas" << std::endl;
          std::cout << std::endl;
          for(i=0 ; i<quantidadeFuncionarios ; i++){
            std::cin.ignore();
            std::cout << "Matrícula..........: ";
            std::cin >> cadastrarFuncionarios[i].matricula;
            std::cin.ignore();
            std::cout << "Nome...............: ";
            std::cin.get(cadastrarFuncionarios[i].nome, 100);
            std::cin.ignore();
            std::cout << "Salário............: ";
            std::cin >> cadastrarFuncionarios[i].salario;
            std::cout << std::endl;
          }//for

          //ORDENACAO
          for(i=0 ; i<quantidadeFuncionarios ; i++){
            for(int j=0 ; j<quantidadeFuncionarios ; j++){
              if(cadastrarFuncionarios[i].matricula < cadastrarFuncionarios[j].matricula){
                auxiliarTrocador = cadastrarFuncionarios[i];
                cadastrarFuncionarios[i] = cadastrarFuncionarios[j];
                cadastrarFuncionarios[j] = auxiliarTrocador;
              }//if
            }//for j
          }//for
          //FIM ORDENACAO

          cadastrou = true;
          break;
          //FIM CADASTRO FUNCIONARIOS E ORDENACAO

      case 1:
        //PESQUISAR FUNCIONARIO
        if(cadastrou == true){
          strcpy(resposta, "S");
          while(strcmp(resposta, "S") == 0){
            std::cout << "Digite a matrícula que deseja pesquisasr: ";
            std::cin >> pesquisaMatricula;
            std::cin.ignore();

            comeco = 0;
            ultimo = quantidadeFuncionarios;
            achou = false;

            while(comeco <= ultimo && achou == false){
                meio = (comeco+ultimo)/2;
              if(pesquisaMatricula == cadastrarFuncionarios[meio].matricula){
                achou = true;
              }else{
                if(pesquisaMatricula < cadastrarFuncionarios[meio].matricula){
                  ultimo = meio-1;
                }else{
                  comeco = meio+1;
                }//if-else
              }//if
            }//while

            if(achou == true){
              std::cout << std::endl;
              std::cout << "Matrícula..........: " << cadastrarFuncionarios[meio].matricula << std::endl;
              std::cout << "Nome...............: " << cadastrarFuncionarios[meio].nome << std::endl;
              std::cout << "Salário............: " << cadastrarFuncionarios[meio].salario << std::endl;
              std::cout << std::endl;
            }else{
               std::cout << std::endl;
               std::cout << "Não foi localizado!" << std::endl;
               std::cout << std::endl;
            }//if

              std::cout << std::endl;
              std::cout << "Deseja continuar? S/N => ";
              std::cin.get(resposta, 4);
              std::cin.ignore();
              std::cout << std::endl;

          }//while
        }else{
          std::cout << std::endl;
          std::cout << "Cadastre primeiro" << std::endl;
          std::cout << std::endl;
        }//if
        break;
        //FIM PESQUISAR FUNCIONARIO

      case 2:
        //FUNCIONARIOS QUE GANHAM MAIS QUE 1000
        if(cadastrou == true){
          std::cout << "Funcionários que ganham mais que R$1.000,00.";
          std::cout << std::endl;
          for(i=0 ; i<quantidadeFuncionarios ; i++){
            if(cadastrarFuncionarios[i].salario > 1000){
              std::cout << std::endl;
              std::cout << "Matrícula..........: " << cadastrarFuncionarios[i].matricula << std::endl;
              std::cout << "Nome...............: " << cadastrarFuncionarios[i].nome << std::endl;
              std::cout << "Salário............: " << cadastrarFuncionarios[i].salario << std::endl;
              std::cout << std::endl;
            }//if
          }//for
        }else{
          std::cout << std::endl;
          std::cout << "Cadastre primeiro" << std::endl;
          std::cout << std::endl;
        }//if
        break;
        //FIM FUNCIONARIOS QUE GANHAM MAIS QUE 1000

      case 3:
        //FUNCIONARIOS QUE GANHAM MENOS QUE 1000
        if(cadastrou == true){
          std::cout << "Funcionários que ganham MENOS que R$1.000,00.";
          std::cout << std::endl;
          for(i=0 ; i<quantidadeFuncionarios ; i++){
            if(cadastrarFuncionarios[i].salario < 1000){
              std::cout << std::endl;
              std::cout << "Matrícula..........: " << cadastrarFuncionarios[i].matricula << std::endl;
              std::cout << "Nome...............: " << cadastrarFuncionarios[i].nome << std::endl;
              std::cout << "Salário............: " << cadastrarFuncionarios[i].salario << std::endl;
              std::cout << std::endl;
            }//if
          }//for
        }else{
          std::cout << std::endl;
          std::cout << "Cadastre primeiro" << std::endl;
          std::cout << std::endl;
        }//if
        break;
        //FIM FUNCIONARIOS QUE GANHAM MENOS QUE 1000

      case 4:
        //FUNCIONARIOS QUE GANHAM MENOS IGUALMENTE 1000
        if(cadastrou == true){
          std::cout << "Funcionários que ganham IGUALEMNTE R$1.000,00.";
          std::cout << std::endl;
          for(i=0 ; i<quantidadeFuncionarios ; i++){
            if(cadastrarFuncionarios[i].salario == 1000){
              std::cout << std::endl;
              std::cout << "Matrícula..........: " << cadastrarFuncionarios[i].matricula << std::endl;
              std::cout << "Nome...............: " << cadastrarFuncionarios[i].nome << std::endl;
              std::cout << "Salário............: " << cadastrarFuncionarios[i].salario << std::endl;
              std::cout << std::endl;
            }//if
          }//for
        }else{
          std::cout << std::endl;
          std::cout << "Cadastre primeiro" << std::endl;
          std::cout << std::endl;
        }//if
        break;
        //FIM FUNCIONARIOS QUE GANHAM IGUALMENTE 1000

      case 5:
        parada = false;
        break;

      default:
        std::cout << std::endl;
        std::cout << "Escolha uma opção válida" << std::endl;
        std::cout << std::endl;
    }//switch-case
  }//while
  return 0;
}
