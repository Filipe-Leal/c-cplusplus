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


/*bool simbolos(char simbolos_func[]){ //FUNCAO QUE IDENTIFICA SÍMBOLOS MATEMÁTICOS
  int i=0;

  for(i=0; i<(tam-1) ; i++){
    switch (simbolos_func[i]){
      case '+':
        printf("SOMA \n");
        return true;
      break;

      case '-':
        printf("SUBTRACAO \n");
        return true;
      break;

       case '*':
        printf("MULTIPLICAO \n");
        return true;
      break;

       case '/':
        printf("DIVISAO \n");
        return true;
      break;
    }
  }
}//FIM FUNCTION SIMBOLO*/


/*void eNumero(char* numeros_func, bool simbolo_func_enumero){
 //TENHO QUE DESENVOLVER UMA FUNCAO QUE TRANSFORMA CARACTERER EM NÚMERO
  // EX: |1|1|+|0| -> |1|1| -> 11
  // SE DIGITADO 2 OU MAIS NÚMEROS ANTES DE UM SÍMBOLO É UM NÚMERO COM MAIS CASAS
  //

  int i;
  for(i=0 ; i<(tam-1);i++){
    if(simbolo_func_enumero == 1){
      i++;

      printf("TESTE");
    }

    int convertido = atoi(numeros_func);
    int soma=0;
    soma = convertido+1;

  }





} //FIM FUNCTION CARACTERE PARA NUMERO*/


int main(){

  char expressao[tam];

  printf("Digite os valores, abaixo: \n");
  fgets(expressao, tam, stdin);
  fflush(stdin);

  remover_espacos(expressao);


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
