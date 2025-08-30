#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <Windows.h>

//FUNCAO
void menor(float numeroUm_func, float numeroDois_func, float numeroTres_func){

  if(numeroUm_func < numeroDois_func && numeroUm_func < numeroTres_func){
    printf("%f", numeroUm_func);
  } else if(numeroDois_func < numeroTres_func){
    printf("%f", numeroDois_func);
  } else {
    printf("%f", numeroTres_func);
  }

  
}


int main(){

  setlocale(LC_ALL, "Portuguese_Brasil");
  SetConsoleOutputCP(CP_UTF8);
  
  //VARIAVEIS
  float numeroUm=0, numeroDois=0, numeroTres=0;

  //ENTRADA DE DADOS
  printf("Digite o primeiro número...: ");
  scanf("%f", &numeroUm);

  printf("Digite o segundo número...: ");
  scanf("%f", &numeroDois);

  printf("Digite o terceiro número...: ");
  scanf("%f", &numeroTres);

  printf("\n");

  menor(numeroUm, numeroDois, numeroTres); //FUNCAO
  printf("\n");

}






/* 5. Crie uma função em linguagem C que receba 2 números
 e retorne o menor valor*/
