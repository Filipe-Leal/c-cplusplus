#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//DEFININDO O TAMANHO PADRÃO 12 CARACTERES
#define tam 12

//FUNCAO QUE REMOVE ESPAÇOS USANDO strtok
void remover_espacos(char expressao_func[]){
  char *expressao; //VARIAVEL ponteiro de expressao_func
  char valores[tam]; // VARIAVEL PARA MANIPULAR, SE FOR NECESSARIO COM strcmp

  expressao = strtok(expressao_func, " "); //REMOVE ESPAÇO
  while(expressao != NULL){ //ENQUANTO FOR DIFERENTE DE NULL REPETE
    printf("%s \n", expressao);

    expressao = strtok(NULL, " "); //REMOVE ESPAÇO
  }

}


int main(){

  char expressao[tam];
  int i;


  printf("Digite os valores, abaixo: \n");
  fgets(expressao, tam, stdin);
  fflush(stdin);

  remover_espacos(expressao);

  /*SEPARA OS NUMEROS DO SIMBOLOS?
    CRIO UM ARRAY DE SIMBOLOS E OUTRO DE NUMERO
    TRANSFORMO OS CARACTERES EM NUMEROS?
  */


  printf("\n");

  //puts(valores);

  return 0;
}



/*  //CONVERTENDO CHAR PARA DOUBLE/FLOAT
  char teste = '7';
  int convertido = (int)teste - 48;
  int soma=0;

  soma = convertido+1;

  printf("%d \n", soma);
  printf("%d", convertido);*/


  /*
  FASE 1 -> Teste código em Terminal
    Etapa 1 -> Transformar caractere em número;     (AINDA ESTOU NESSA ETAPA, MAS SEPARANDO NÚMEROS DE DOS SÍMBOLOS)
    FEITO - Etapa 2 -> Retirar espaço de vetor de caractere; '1 + 1' -> '1+1'
    Etapa 3 -> Transformar símbolo matemática em cálculo.
    Etapa 4 -> Calcular com dois algarismos '7*1';
    Etapa 5 -> Calcular com três ou mais algarismos '7+1+1';
    Etapa 6 -> Revisão do código;

  Fase 2 -> Transformar em tela gráfica
    Etapa 1 -> Básico sobre C#
    Etapa 2 -> Aprender funcionamento de botões;
    Etapa 3 -> Aprender funcionamento de caixa de textos;
    Etapa 4 -> Criar botões de número;
    Etapa 5 -> Criar botões de apagar;
    Etapa 6 -> Criar botões dos cálculos;
    Etapa 7 -> Criar botão de Enter/Ok/Realizar cálculo;
    Etapa 8 -> Realizar a mesma codificação ou parecida da FASE 1;
    Etapa 9 -> Revisão

  */
