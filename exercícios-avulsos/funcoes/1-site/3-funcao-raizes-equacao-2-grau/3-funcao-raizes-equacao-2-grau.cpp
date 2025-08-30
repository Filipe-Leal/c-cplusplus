#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//INICIO FUNCAO
void equacaoSegundoGrau(float a_func, float b_func, float c_func){
  //VARIAVEIS FUNCAO
  float delta_func=0, raiz_func=0;

  delta_func = (pow(b_func, 2)) - (4*a_func*c_func);

  //VERIFICAO RAIZ DE DELTA
  if(delta_func >= 0 || delta_func == 0){
    raiz_func = -1*(b_func+sqrt(delta_func)) / (2*a_func);

    printf("Valor de Delta: %f \n", delta_func);
    printf("Raiz Negativa: %f \n", raiz_func);
    printf("Raiz Positiva: %f", -1*raiz_func);

  }else{
    //DELTA < 0
    printf("DELTA < 0 - DELTA MENOR QUE 0");
  }

} //FIM FUNCAO

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

  printf("\n");

  equacaoSegundoGrau(a, b, c);

  return 0;
}

/*3. Usando as 3 funções acima, crie um aplicativo que 
calcula as raízes de uma equação do 2o grau:
ax² + bx + c=0
Para ela existir, o coeficiente 'a' deve ser diferente de 
zero.
Caso o delta seja maior ou igual a zero, as raízes serão
 reais. Caso o delta seja negativo, as reais serão 
 complexas e da forma: x + iy
*/