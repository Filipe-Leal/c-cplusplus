#include <stdio.h>

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