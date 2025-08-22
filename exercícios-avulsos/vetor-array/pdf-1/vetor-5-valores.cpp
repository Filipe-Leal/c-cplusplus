#include <stdio.h>

int main(){
  //VARIAVEIS
  int values[5]; //VETOR
  int i, sum;

  //ENTRADA DE DADOS
  for(i=0 ; i<=4 ;i++){
    printf("Digite o %d valor...: ", i+1);
    scanf("%d", &values[i]);

    sum += values[i];
  }

  printf("\n");

  //SAIDA DE DADOS
  printf("A soma é..: %d", sum);

  return 0;
}



/*1. Faça um programa que leia 5 valores inteiros, 
armazeno-os em um vetor, calcule e apresente a soma
destes valores.*/