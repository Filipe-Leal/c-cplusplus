#include <stdio.h>
#include <stdlib.h>

void nuloOuNao(char valorNuloNao){
  if(valorNuloNao == ' '){
    printf("O valor %c é nulo!", valorNuloNao);
  }else{
    printf("O valor %c não é nulo!", valorNuloNao);
  }
}

int main(){
  //VARIAVEIS
  char valor;

  //SAIDA DE DADOS
//  printf("Digite um valor...: ");
/// scanf("%d", &valor);

  nuloOuNao(' ');

}


/*1. Crie uma função que receba um valor e diga se é nulo ou não.*/