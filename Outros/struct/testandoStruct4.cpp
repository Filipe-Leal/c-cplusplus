#include <iostream>
#include <locale.h>
#include <string.h>
//#include<cstring>

typedef double bimestre[4];
struct cad_aluno{
        char nome[50];
        bimestre nota;
};

int main(){

  setlocale(LC_ALL, "");

  //VARIAVEIS
  cad_aluno aluno[8];
  cad_aluno auxiliarTrocador;

  int tamanhoVetor = sizeof(aluno)/sizeof(aluno[0]);

  //ALUNO
  for(int i=0 ; i < 8 ; i++){
    std::cout << "Digite o nome do aluno.......: ";
    std::cin >> aluno[i].nome;

    //NOTAS
    for(int j=0 ; j < 4 ; j++){
      std::cout << "Digite a " << j+1 << " nota do aluno.....: ";
      std::cin >> aluno[i].nota[j];
    }//for nota

    std::cout << std::endl;
  }//for

  //ORDENACAO DOS DADOS - strcmp
  for(int linha=0 ; linha < tamanhoVetor ; linha++){
    for(int coluna=linha ; coluna < tamanhoVetor ; coluna++){
      for( ; strcmp(aluno[linha].nome, aluno[coluna].nome) > 0 ; ){
        auxiliarTrocador = aluno[linha];
        aluno[linha] = aluno[coluna];
        aluno[coluna] = auxiliarTrocador;
      }//for strcmp
    }//for - j
  }//for i

  std::cout << std::endl;
  std::cout << "Saída Matriz C" << std::endl;

  //SAIDA
  for(int i=0 ; i < 8 ; i++){
    std::cout << "Aluno........................: " << aluno[i].nome << std::endl;
    for(int j=0 ; j < 4; j++){
      std::cout << j+1 << " nota do aluno...............: " << aluno[i].nota[j] << std::endl;
    }//for nota
    std::cout << std::endl;
  }//for

  return 0;
}
