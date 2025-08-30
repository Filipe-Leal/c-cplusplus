#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<Windows.h>

//FUNCAO
void maior(float numeroUm_func, float numeroDois_func){
  if(numeroUm_func > numeroDois_func){
    printf("%f", numeroUm_func);
  } else{
    printf("%f", numeroDois_func);
  }
  
}


int main(){

  setlocale(LC_ALL, "Portuguese_Brasil");
  SetConsoleOutputCP(CP_UTF8);
  
  //VARIAVEIS
  float numeroUm=0, numeroDois=0;

  //ENTRADA DE DADOS
  printf("Digite o primeiro número...: ");
  scanf("%f", &numeroUm);

  printf("Digite o segundo número...: ");
  scanf("%f", &numeroDois);

  printf("\n");

  maior(numeroUm, numeroDois); //FUNCAO
  printf("\n");

}






/* 4. Crie uma função em linguagem C que receba 2 números
 e retorne o maior valor.*/