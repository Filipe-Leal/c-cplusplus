#include<iostream>
#include<locale.h>
#include<cstring>

struct cadastroFuncionario{
        int codigoFuncionario;
        char cargoFuncionario[50];
        double salarioFuncionario;
};

 int main(){
   setlocale(LC_ALL, "");

   //VARIAVEIS
   cadastroFuncionario tabelaFuncionario[17];

  // char resposta[]; - deu erro aqui
   int codigoPesquisa, i,
       quantidadeCadastro = sizeof(tabelaFuncionario) / sizeof(tabelaFuncionario[0]);

   bool acha;

   //ENTRADA DE DADOS DOS FUNCIONARIOS
   for(i = 0 ; i < quantidadeCadastro ; i++){
     std::cout << "Código...............: " ;
     std::cin >> tabelaFuncionario[i].codigoFuncionario;

     std::cout << "Cargo................: " ;
     std::cin >> tabelaFuncionario[i].cargoFuncionario;

     std::cout << "Salário..............: " ;
     std::cin >> tabelaFuncionario[i].salarioFuncionario;

     std::cout << std::endl;

     system("clear||cls");
   }//for - entrada de dados

   //PESQUISA SEQUENCIAL
   char resposta[] = "S";

   while(strcmp(resposta, "S") == 0){
    std::cout << "Qual o código de 1 a " << quantidadeCadastro << ": ";
    std::cin >> codigoPesquisa;

    i = 0;
    acha = false;
    while(i <= quantidadeCadastro && acha == false){
      if(codigoPesquisa == tabelaFuncionario[i].codigoFuncionario){
          acha = true;
      }else{
        i++;
      }//if - codigo na tabela
    }//while - achar codigo na tabela

    //SAIDA DO CODIGO ACHADO
    if(acha == true){
      std::cout << "Código...............: " << tabelaFuncionario[i].codigoFuncionario << std::endl;;

      std::cout << "Cargo................: " << tabelaFuncionario[i].cargoFuncionario << std::endl;;

      std::cout << "Salário..............: " << tabelaFuncionario[i].salarioFuncionario << std::endl;;

      std::cout << std::endl;
    }//if - acha é verdadeiro

    std::cout << std::endl;

    std::cout << "Deseja continuar a pesquisa? => ";
    std::cin >> resposta;

    std::cout << std::endl;

    system("clear||cls");

   }//while - pesquisa sequencial

  return 0;
 }
