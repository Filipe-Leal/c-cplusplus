#include<iostream>
#include<locale.h>
#include<string.h>
#include<stdlib.h>

//Data.................: 10/10/2023
//Sistema Operacional..: Ubuntu Mate
//Editor/IDE...........: VIM

//int argc, vai guarda a quantidade de parâmetros informados
//char *argv[] (armazena os argumento), é um ponteiro e uma matriz, ele é um ponteiro para uma matriz ponteiro de caracterer
//quando digitar um argumento ele vai apontar para aquele argumento digitado que ficará guardado na matriz??
//

int main(int argc, char *argv[]){ 
  setlocale(LC_ALL, "Portuguese");
  
  //std::cout << argv[4] << "\n"; //MOSTRA OS PARÂMETROS DIGITADOS
  //std::cout << argc << "\n";  //MOSTRA A QUANTIDADE PARÂMETROS

  if(argc > 1){ //QUANDO FOR MAIOR QUE UM INDICA QUE FORAM ENVIADOS PARÂMETROS, POIS VAZIO =1
    if(!strcmp(argv[1], "sol")){
      std::cout << "Vou ao clube. \n\n";  
    }else if(!strcmp(argv[1], "nublado")){
      std::cout << "Vou ao cinema.\n\n";
    }else{
      std::cout << "Vou ficar em casa.\n\n";
    }//if2        
  }//if1

 // system("pause||pause()");


  return 0;
}        
