#include <stdio.h>
#include <stdlib.h>

//FUNCAO QUADRADO
void quadrado(int *valor){

  //VARIAVEIS FUNCAO
  int i=0, j=0;

  //PROCESSAMENTO DE DADOS
  for(i=1 ; i <= *valor; i++){
      for(j=1 ; j <= *valor ; j++){
        printf("*");
      }
    printf("\n");
    }
}

int main(){

  //VARIAVEIS
  int valorDesejado=0;

  //ENTRADA
  printf("Digite o tamanho do quadrado desejado...: ");
  scanf("%d", valorDesejado);

  //PASSAGEM PARA FUNCAO
  quadrado(&valorDesejado);
  
  //saida de dados
  printf("\n");
  printf("%d", valorDesejado);

  system("pause");
  return 0;
}

/*Escrever a função quadrado que tem apenas um
parâmetro, lado.
Ex: quadrado(3) 
***
***
***

*/