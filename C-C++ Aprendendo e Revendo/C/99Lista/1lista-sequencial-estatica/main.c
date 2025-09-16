#include <stdio.h>
#include "ListaSequencial.h"

int main(){
  Lista *li; //PONTEIRO PARA Lista

  //Criar lista
  li = cria_lista();

  //Liberar lista
  libera_lista(li);

  int x = tamanho_lista(li);

  //int xDois = lista_cheia(li);

  //if(lista_cheia(li));

 // int xTres = lista_vazia(Lista* li);
  int xTres = lista_vazia(li);
  if(lista_vazia(li))

  return 0;
}
