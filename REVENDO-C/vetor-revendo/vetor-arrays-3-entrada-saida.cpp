#include <stdio.h>

int main(){

  //VETOR
  int v[5] = {10, 20, 30, 40, 50};
  int i;

  for (i=0 ; i<5; i++){
      printf("Insira um dado: \n");
      scanf("%d", &v[i]);
  }

  printf("Dados inseridos:\n");

  for(i=0 ; i<5 ; i++){
    printf("%d ", v[i]);
  }


  return 0;
}