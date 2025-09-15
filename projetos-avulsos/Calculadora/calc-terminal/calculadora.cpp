#include <stdio.h>
#include <stdlib.h>

//DEFININDO O TAMANHO PADRÃO 12 CARACTERES
#define tam 12

void remover_espacos(char valores_func[]){
  int i, j=0;

  //percorre a string original
  for (i=0 ; valores_func[i] != '\0' ; i++){ // para o incrementador igual a zero, sendo valores diferente de NADA(/0) , incremente e faça

    //se o caracatere não for um espaço, copiamos para a nova posição
    //se o valor[nesta posicao] for diferente de espaço
      //valores[na posição j] recebe valores[da posicao i]
    if(valores_func[i] != ' '){
      valores_func[j++] = valores_func[i];
    }

  }
  //finaliza string sem espaços
  valores_func[j] = '\0';

}//FIM FUNCAO ESPAÇOS


bool simbolos(char simbolos_func[]){ //FUNCAO QUE IDENTIFICA SÍMBOLOS MATEMÁTICOS
  int i=0, resultado=0;

  for(i=0; i<(tam-1) ; i++){
    switch (simbolos_func[i]){
      case '+':
       // printf("SOMA \n");
  
        return resultado;
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

 



} //FIM FUNCTION CARACTERE PARA NUMERO


int main(){

  char valores[tam];  
  int resultado=0;
  
  printf("Digite os valores, abaixo: \n");
  fgets(valores, tam, stdin);
  fflush(stdin);

  remover_espacos(valores);
  
  resultado = simbolos(valores);

  printf("%d", resultado);

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
    Etapa 1 -> Retirar espaço de vetor de caractere; '1 + 1' -> '1+1'
    Etapa 2 -> Transformar caractere em número;
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