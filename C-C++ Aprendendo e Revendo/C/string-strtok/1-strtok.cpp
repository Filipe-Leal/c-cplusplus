#include <stdio.h>
#include <string.h>

int main(){
  char str[100] = "data;idade!matricula,aluno upa";
  char *sub;
  char texto[20];

  sub =strtok(str,"! , ;");
  while(sub != NULL){
    printf("%s \n", sub);
    strcmp(texto, sub); //SE FOR MANIPULAR A STRING
                        // É MELHOR CRIAR UMA COPIA DELA COM strcmp e manipular

    sub = strtok(NULL,"! , ; ");
  }
  printf("\nFIM\n");

  return 0;
}
/*
#include <stdio.h>
#include <string.h>

int main(){
  char str[100] = "palavra1.palavra2,palavra3 palavra4";
  char *sub;
  char texto[20];

  sub =strtok(str,".");
  while(sub != NULL){
    printf("%s \n", sub);
    strcmp(texto, sub); //SE FOR MANIPULAR A STRING
                        // É MELHOR CRIAR UMA COPIA DELA COM strcmp e manipular

    sub = strtok(NULL,".");
  }
  printf("\nFIM\n");

  return 0;
}

*/
