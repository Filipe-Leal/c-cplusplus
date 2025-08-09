///FUNCAO SEM RETORNO(VOID) E COM RETORNO

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void retornoDelta(float a_func, float b_func, float c_func){
  float delta_func=0;
  delta_func = pow(b_func, 2) - (4*a_func*c_func);
  printf("%f", delta_func);
}

int main(){

  //VARIAVEIS
  float a=0, b=0, c=0, delta=0;

  printf("Digite o valor de A...: ");
  scanf("%f", &a);

  printf("Digite o valor de B...: ");
  scanf("%f", &b);
  
  printf("Digite o valor de C...: ");
  scanf("%f", &c);

  printf("\n");
  retornoDelta(a, b, c);

  return 0;
}


/*#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float retornoDelta(float a_func, float b_func, float c_func){
  float delta_func=0;
  delta_func = pow(b_func, 2) - (4*a_func*c_func);
  return delta_func;
}

int main(){

  //VARIAVEIS
  float a=0, b=0, c=0, delta=0;

  printf("Digite o valor de A...: ");
  scanf("%f", &a);

  printf("Digite o valor de B...: ");
  scanf("%f", &b);
  
  printf("Digite o valor de C...: ");
  scanf("%f", &c);

  printf("\n");

  delta = retornoDelta(a, b, c);
  printf("%f", delta);

  return 0;
}
*/
/*2. Crie uma função que receba três valores, 'a', 'b' e 'c', que 
são os coeficientes de uma equação do segundo grau e retorne o valor 
do delta, que é dado por 'b² - 4ac'*/