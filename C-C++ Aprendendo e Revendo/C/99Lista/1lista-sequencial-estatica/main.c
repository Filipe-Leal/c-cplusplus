#include <stdio.h>
#include "ListaSequencial.h"

int main(){
  Lista *li; //PONTEIRO PARA Lista

  struct aluno dados_aluno;

  //CRIAR LISTA
  li = cria_lista();

  //LIBERA LISTA
  libera_lista(li);

  //TAMANHO DA LISTA
 // int x = tamanho_lista(li);

  //int xDois = lista_cheia(li);

  //if(lista_cheia(li));

 // int xTres = lista_vazia(Lista* li);
//  int xTres = lista_vazia(li);
 // if(lista_vazia(li))

  //INSERCAO NA LISTA FINAL
  int x = insere_lista_final(li, dados_aluno);

  return 0;
}
