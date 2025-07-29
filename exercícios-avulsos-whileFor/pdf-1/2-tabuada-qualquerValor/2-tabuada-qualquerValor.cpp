#include <stdio.h>
#include <stdlib.h>

// multiplicando x multiplicador = resultado

int main(){
  int multiplicando, multiplicador, resultado;

  printf("Digite a tabuada desejada...: ");
  scanf("%d", &multiplicador);
  printf("\n");

  

  for(multiplicando = 1; multiplicando <= 10; multiplicando++){
    
    resultado = multiplicando*multiplicador;
    printf("%d x %d = %d \n", multiplicando, multiplicador, resultado);

  }
  system("pause");
}