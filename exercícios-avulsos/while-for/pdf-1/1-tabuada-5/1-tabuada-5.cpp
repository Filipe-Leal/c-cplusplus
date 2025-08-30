#include <stdio.h>
#include <stdlib.h>

int main(){
  int multiplicando, multiplicador; 
  for(multiplicando = 1; multiplicando <= 10 ; multiplicando++){
    multiplicador = multiplicando*5;

    printf("%d x 5 = %d \n", multiplicando, multiplicador);

  }
}