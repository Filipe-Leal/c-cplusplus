#include <stdio.h>
#include <stdlib.h>

int main(){
  //Maior elemento de um array
  int i, lista[5] = {3, 18, 2, 51, 45};
  int Maior = lista[0]; //Não sei qual o valor menor do array,
                        //suponho a primeira posicao

  for(i=1; i<5; i++){ //nao começo com i=0, por questao de otimizacao
    if(Maior < lista[i]){ //lembrando que maior inicia com o valor de Lista[0];
      Maior = lista[i];
    }
  }
  printf("Maior = %d\n", Maior);
  system("pause");
}
