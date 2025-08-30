#include <iostream>
#include <locale.h>
#include <string.h>

typedef double bimestre[4];

struct cadastroAluno {
        char nome[200];
        bimestre notas;
};

int main(){

  setlocale(LC_ALL, "");

  //VARIAVEIS
  cadastroAluno aluno[8];

  //ENTRADA DE DADOS
  for(int i=0 ; i<8 ; i++){

      std::cout << "----------ALUNO-" << i << "----------" << std::endl;

      //NOMES
      std::cout << "Digite o nome.........: ";
      std::cin >> aluno[i].nome;

      //NOTAS
      for(int j=0 ; j<4 ; j++){
        std::cout << "Digite a " << j+1 << " nota.......: ";
        std::cin >> aluno[i].notas[j];
      }

      std::cout << std::endl;
  }

  std::cout << std::endl;
  std::cout << "SAÍDA" << std::endl;

  //SAIDA DE DADOS
  for(int i=0 ; i<8 ; i++){

      std::cout << "----------ALUNO-" << i << "----------" << std::endl;

      //NOMES
      std::cout << "Digite o nome.........: " << aluno[i].nome << std::endl;

      //NOTAS
      for(int j=0 ; j<4 ; j++){
        std::cout << "Digite a " << j+1 << " nota.......: " << aluno[i].notas[j] << std::endl;
      }

      std::cout << std::endl;
  }

 return 0;
}
