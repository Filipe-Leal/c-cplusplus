#include <iostream>
#include <locale.h>

int main() {
  //LOCAL
  setlocale(LC_ALL, "");

  //VARIAVEIS
  double notaUm = 0, notaDois = 0,
         notaTres = 0, notaQuatro = 0,
         mediaNotas = 0, notaNovoExame = 0;

  //ENTRADA DE DADOS
  std::cout << "Digite a primeira nota......: ";
  std::cin >> notaUm;
  std::cout << "Digite a segunda nota.......: ";
  std::cin >> notaDois;
  std::cout << "Digite a terceira nota......: ";
  std::cin >> notaTres;
  std::cout << "Digite a quarta nota........: ";
  std::cin >> notaQuatro;

  std::cout << std::endl;

  //PROCESSAMENTO DE DADOS
  mediaNotas = (notaUm+notaDois+notaTres+notaQuatro)/4;

  if(mediaNotas >= 7){

    std::cout << "Status......................: APROVADO." << std::endl;

  } else {
      std::cout << "Digite a nova nota..........: ";
      std::cin >> notaNovoExame;

      mediaNotas = (mediaNotas+notaNovoExame)/2;

      if(mediaNotas >= 5){

          std::cout << "Status......................: APROVADO EM EXAME.";
          std::cout << std::endl;

      }else{

        std::cout << "Status......................: REPROVADO EM EXAME.";
        std::cout << std::endl;

      }//if
  }//if

  return 0;
}

/*
d) Ler os valores de quatro notas escolares de um aluno. Calcular a média
aritmética e apresentar a mensagem "Aprovado" se a média obtida for maior
ou igual a 7; caso contrário, o programa deve solicitar a nota de exame do
aluno e calcular uma nova média aritmética entre a nota de exame e a
primeira média aritmética. Se o valor da nova média for maior ou igual a
cinco, apresentar a mensagem "Aprovado em exame"; caso contrário,
apresentar a mensagem "Reprovado". Informar junto de cada mensagem o
valor da média obtida.
*/
