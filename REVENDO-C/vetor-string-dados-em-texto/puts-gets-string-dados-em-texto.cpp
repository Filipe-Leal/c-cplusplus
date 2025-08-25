#include <stdio.h>

int main(){

  char s[10];

  printf("Digite algo (leitura pelo gets): \n");
  gets(s); //não controla tamanho limite de vetor
  fflush(stdin);

  puts("Resultado: ");
  puts(s);
  puts("");

  printf("Digite algo (leitura pelo fgets): \n");
  fgets(s, 10, stdin); //controla
  fflush(stdin);

  puts("Resultado: ");
  puts(s);
  
  return 0;
}