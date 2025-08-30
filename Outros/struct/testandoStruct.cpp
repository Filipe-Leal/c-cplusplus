#include <iostream>
#include <locale.h>
#include <string.h>

struct cadastroAluno{
  char nome[200];
  double notaUm = 0, notaDois = 0,
         notaTres = 0, notaQuatro = 0;
};

int main (){
  setlocale(LC_ALL, "");

  //VARIAVEIS
    //struct
  cadastroAluno aluno;

  //ENTRADA DE DADOS - ATRIBUICAO
  strcpy(aluno.nome, "Python");
  aluno.notaUm = 1;
  aluno.notaDois = 6;
  aluno.notaTres = 6.7;
  aluno.notaQuatro = 9.2;

  //SAIDA DE DADOS
  std::cout << "Nome.....: " << aluno.nome << std::endl;
  std::cout << "Nota1....: " << aluno.notaUm << std::endl;
  std::cout << "Nota2....: " << aluno.notaDois << std::endl;
  std::cout << "Nota3....: " << aluno.notaTres << std::endl;
  std::cout << "Nota4....: " << aluno.notaQuatro << std::endl;

  return 0;
}
