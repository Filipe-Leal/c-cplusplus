#include <stdio.h>
#include <stdbool.h>

void entradaVetor(int *e_vetor_func, int e_tamVetor_func){
  int i;
  for(i=0 ; i<e_tamVetor_func ; i++){
    scanf("%d", &e_vetor_func[i]);
  }
}

void saidaVetor(int *s_vetor_func, int s_tamVetor_func){
  int i;
  for(i=0 ; i<s_tamVetor_func ; i++){
    printf("%d", s_vetor_func[i]);
  }
}

int main(){
  int valores[5];
  entradaVetor(valores,5);
  saidaVetor(valores,5);

  return 0;
}