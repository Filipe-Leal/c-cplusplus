#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char *argv[]){

  //int argc - guarda a quantidade de parâmetros/argumentos informado

  //char *argv[] //ponteiro e matriz
  //É um ponteiro para matriz de ponteiro de caractere.
  //Cada elemento dessa matriz vai apontar um argumento para linha de comando.
  //Quando digitar um argumento ele vai guarda o argumento na matriz
  //Resumindo armazena argumentos

  //Por padrao, o primeiro argumento é o nome do programa
 // cout << argv[3] << "\n\n";
 // cout << argc << "\n";

  // strcmp() se a strings informadas forem iguais = 0, se forem diferentes = -1


  if(argc > 1){
    if(!strcmp(argv[1], "sol")){
      cout << "Vou ao clube. \n\n";
    }else if(!strcmp(argv[1], "nublado")){
      cout << "Vou ao cinema. \n\n";
    }else{
      cout << "Vou ficar em casa. \n\n";
    }
  }



  return 0;
}
