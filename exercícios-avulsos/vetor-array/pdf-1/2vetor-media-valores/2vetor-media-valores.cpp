#include <stdio.h>

int main(){
  //VARIAVEIS
  int values[5]; //VETOR
  int i, sum=0, mean=0;

  //ENTRADA DE DADOS
  for(i=0 ; i<=4 ;i++){
    printf("Digite o %d valor...: ", i+1);
    scanf("%d", &values[i]);

    //PROCESSAMENTO DE DADOS
    sum += values[i];
  }

  //PROCESSAMENTO DE DADOS
  mean = sum/5;

  printf("\n");

  //SAIDA DE DADOS
  printf("A média é ............: %d \n", mean);
  printf("Respectivamente: Valores Menores e Maiores que a média: ");

  for(i=0 ; i<=4 ;i++){
    if(values[i]<mean){
      printf("%d", values[i]);
    } else {
      printf("%d", values[i]);
    }

  }
  


  
  return 0;
}


/*2. Altere o programa anterior para calcular e 
apresentar a média dos valores entrados e aqueles que são
maiores e menores que a média*/


