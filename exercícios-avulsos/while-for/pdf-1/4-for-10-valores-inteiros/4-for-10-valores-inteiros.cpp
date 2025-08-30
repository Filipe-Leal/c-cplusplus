#include <stdio.h>
#include <stdlib.h>

int main(){

  int value, i, smaller, larger, sum;
  float mean;

  value=0, i=0, smaller=1000000, larger=0, mean=0, sum=0;


  for(i=1 ; i<=10; i++){
    printf("Digite o %d valor...: ", i);
    scanf("%d", &value);

    //media
    sum +=value;

    //maior
    if(value > larger){
      larger = value;
    }

    //menor
    if(value < smaller){
      smaller = value;
    }
  }

  mean=sum/10;

  printf("\n");
  printf("Maior valor...: %d \n", larger);
  printf("Menor valor...: %d \n", smaller);
  printf("Média.........: %f \n", mean);

}

/*4.
 Faça um programa em C (ulize a estrutura for) que leia 10 valores
inteiros e:
• Encontre e mostre o maior valor
• Encontre e mostre o menor valor
• Calcule e mostre a média dos números lidos*/