#include <stdio.h>
#include <stdlib.h>

int main(){
  
  int number;
  number=0;

  for(number=100 ; number<=300 ; number++){
    if(number%2 != 0){
      printf("Número ímpar...: %d \n", number);
    }
  }

}

/*5.
Faça um programa em C que exiba na tela os números ímpares entre 100
e 300.*/