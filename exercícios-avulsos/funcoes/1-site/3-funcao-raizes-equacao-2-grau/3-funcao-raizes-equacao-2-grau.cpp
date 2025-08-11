#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void equacaoSegundoGrau(float a_func, float b_func, float c_func){
  //VARIAVEIS FUNCAO
  float delta_func=0, x_func=0, raiz_func=0;

  delta_func = (pow(b_func, 2)) - (4*a_func*c_func);

  //VERIFICAO RAIZ DE DELTA
  if(delta_func >= 0 || delta_func == 0){
    raiz_func = -1*(b_func+sqrt(delta_func)) / (2*a_func);

    printf("%f \n", delta_func);
    printf("%f \n", raiz_func);
    printf("%f", -1*raiz_func);

  }else{
    //DELTA < 0
    printf("DELTA < 0 - DELTA MENOR QUE 0");
  }

}

int main (){

  //VARIAVEIS
  float a=0, b=0, c=0;

  //ENTRADA DE DADOS
  printf("Digite o valor de A...: " );
  scanf("%f", &a);
  printf("Digite o valor de B...: " );
  scanf("%f", &b);
  printf("Digite o valor de C...: " );
  scanf("%f", &c);

  equacaoSegundoGrau(a, b, c);



  return 0;
}