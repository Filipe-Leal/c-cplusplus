#include <iostream>

using namespace std;

int main(int argc, char *argv[]){

  //int argc - guarda a quantidade de par�metros/argumentos informado

  //char *argv[] //ponteiro e matriz
  //� um ponteiro para matriz de ponteiro de caractere.
  //Cada elemento dessa matriz vai apontar um argumento para linha de comando.
  //Quando digitar um argumento ele vai guarda o argumento na matriz
  //Resumindo armazena argumentos

  //Por padrao, o primeiro argumento � o nome do programa
  cout << argv[3] << "\n\n";
  cout << argc << "\n";



  return 0;
}
