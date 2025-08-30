//FUNCAO SEM RETORNO (void)

#include <stdio.h>
#include <stdlib.h>

//FUNCAO POSITIVO NEGATIVO
void positivoNegativo(int paraValor){
  if(paraValor >= 0){
    printf("Positivo \n");
  }else {
    printf("Negativo \n");
  }

}


int main(){
  //VARIAVEIS
  int valor=0;

  //SAIDA E ENTRADA DE DADOS 
  printf("POSITIVO OU NEGATIVO? \n");
  printf("Digite o valor...: ");
  scanf("%d", &valor);

  positivoNegativo(valor); //FUNCAO


  return 0;
}

/*
0. Crie uma função que receba um valor e informe se ele é positivo ou não.
*/