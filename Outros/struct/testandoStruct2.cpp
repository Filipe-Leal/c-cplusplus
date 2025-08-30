#include <iostream>
#include <locale.h>
#include <string.h>

typedef double bimestre[4];

struct cadastroAluno {
        char nome[50];
        bimestre notas;
};

int main(){

  setlocale(LC_ALL, "");

  //VARIAVEIS
  cadastroAluno aluno;

  //ENTRADA DE DADOS
  std::cout << "Digite o seu nome......: ";
  std::cin >> aluno.nome;

  for(int i=0 ; i<4 ; i++){
    std::cout << "Digite a " << i+1 << " nota........: ";
    std::cin >> aluno.notas[i];
  }

  std::cout << std::endl;

  //SAIDA DE DADOS
  std::cout << "Nome Aluno......: " << aluno.nome << std::endl;
  for(int i=0 ; i<4 ; i++){
    std::cout << "Nota" << i+1 << " Aluno........: " << aluno.notas[i] << std::endl;
  }

 return 0;
}
