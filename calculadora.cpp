#include <stdio.h>
void remover_espacos(char valores_func[]){
  int i, j=0;

  //percorre a string original
  for (i=0 ; valores_func[i] != '\0' ; i++){ // para o incrementador igual a zero, sendo valores diferente de NADA(/0) , incremente e fa�a

    //se o caracatere n�o for um espa�o, copiamos para a nova posi��o
    //se o valor[nesta posicao] for diferente de espa�o
      //valores[na posi��o j] recebe valores[da posicao i]
    if(valores_func[i] != ' '){
      valores_func[j++] = valores_func[i];
    }

  }
  //finaliza string sem espa�os
  valores_func[j] = '\0';

}

int main(){

  char valores[12];

  printf("Digite os valores, abaixo: \n");
  fgets(valores, 12, stdin);
  fflush(stdin);

  remover_espacos(valores);

  printf("\n");

  puts(valores);

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
em for(i=0; i<(tam-1) ; i++), se retira 1 de tamanho, porque o algoritmo entende
de 0 a 11 (onde tem 12 espa�os) e n�o de 1 a 12.
*/



#include <stdio.h>
#include <stdlib.h>

//DEFININDO O TAMANHO PADR�O 12 CARACTERES
#define tam 12

void remover_espacos(char* valores_func[]){
  int i, j=0;

  //percorre a string original
  for (i=0 ; valores_func[i] != '\0' ; i++){ // para o incrementador igual a zero, sendo valores diferente de NADA(/0) , incremente e fa�a

    //se o caracatere n�o for um espa�o, copiamos para a nova posi��o
    //se o valor[nesta posicao] for diferente de espa�o
      //valores[na posi��o j] recebe valores[da posicao i]
    if(valores_func[i] != ' '){
      valores_func[j++] = valores_func[i];
    }

  }
  //finaliza string sem espa�os
  valores_func[j] = '\0';

}


bool simbolos(char simbolos_func[]){ //FUNCAO QUE IDENTIFICA S�MBOLOS MATEM�TICOS
  int i=0;

  for(i=0; i<(tam-1) ; i++){
    switch (simbolos_func[i]){
      case '+':
       // printf("SOMA \n");
        return true;
      break;

      case '-':
     //   printf("SUBTRACAO \n");
        return true;
      break;

       case '*':
   //     printf("MULTIPLICAO \n");
        return true;
      break;

       case '/':
    //    printf("DIVISAO \n");
        return true;
      break;
    }
  }
}//FIM FUNCTION SIMBOLO


void eNumero(char* numeros_func, bool simbolo_func_enumero){
 //TENHO QUE DESENVOLVER UMA FUNCAO QUE TRANSFORMA CARACTERER EM N�MERO
  // EX: |1|1|+|0| -> |1|1| -> 11
  // SE DIGITADO 2 OU MAIS N�MEROS ANTES DE UM S�MBOLO � UM N�MERO COM MAIS CASAS
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





} //FIM FUNCTION CARACTERE PARA NUMERO


int main(){

  char valores[tam];

  printf("Digite os valores, abaixo: \n");
  fgets(valores, tam, stdin);
  fflush(stdin);

  remover_espacos(valores);



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
  FASE 1 -> Teste c�digo em Terminal
    Etapa 1 -> Transformar caractere em n�mero;     (AINDA ESTOU NESSA ETAPA, MAS SEPARANDO N�MEROS DE DOS S�MBOLOS)
    FEITO - Etapa 2 -> Retirar espa�o de vetor de caractere; '1 + 1' -> '1+1'
    Etapa 3 -> Transformar s�mbolo matem�tica em c�lculo.
    Etapa 4 -> Calcular com dois algarismos '7*1';
    Etapa 5 -> Calcular com tr�s ou mais algarismos '7+1+1';
    Etapa 6 -> Revis�o do c�digo;

  Fase 2 -> Transformar em tela gr�fica
    Etapa 1 -> B�sico sobre C#
    Etapa 2 -> Aprender funcionamento de bot�es;
    Etapa 3 -> Aprender funcionamento de caixa de textos;
    Etapa 4 -> Criar bot�es de n�mero;
    Etapa 5 -> Criar bot�es de apagar;
    Etapa 6 -> Criar bot�es dos c�lculos;
    Etapa 7 -> Criar bot�o de Enter/Ok/Realizar c�lculo;
    Etapa 8 -> Realizar a mesma codifica��o ou parecida da FASE 1;
    Etapa 9 -> Revis�o

  */
