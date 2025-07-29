#include <stdio.h>
#include <stdlib.h>

int main (){
  
  int valores, i, maior, menor, soma;
  float media;

  //INICIALIZAÇÃO
  valores=0, maior=0, menor=10000000, soma=0, media=0;

  i=0; //0-19 (20 caracteres)

  while(i<=19){
    printf("Digite um valor...: ");
    scanf("%d", &valores);

    soma += valores;
    
    if(valores > maior){
      maior = valores;
    }
  
    if(valores < menor){ 
      menor = valores;
    }

    i++;
  }

  media = soma/20;

  printf("\n");

  printf("A média é.........: %f \n", media);
  printf("O maior valor é...: %d \n", maior);
  printf("O menor valor é...: %d \n", menor);

}