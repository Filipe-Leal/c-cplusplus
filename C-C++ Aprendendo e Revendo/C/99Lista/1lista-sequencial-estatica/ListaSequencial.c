#include <stdlib.h>
#include <stdio.h>
#include "ListaSequencial.h"

//STRUCT LISTA, IMPLEMENTADO
struct lista{
  int qtd; //QUANTIDADE DE POSIÇÕES OCUPADAS DA LISTA
  struct aluno dados[MAX]; //VETOR DE DADOS DA STRUCT-
};                         //ALUNO E PODEM TER ATÉ MAX[100] ALUNOS


//CRIA LISTA
Lista*cria_lista(){
  Lista*li;
  li=(Lista*)malloc(sizeof(struct lista));
  if(li != NULL)
    li->qtd=0;
  return li;
}

//LIBERA LISTA
void libera_lista(Lista*li){
  free(li);
}

//TAMANHO DA LISTA
int tamanho_lista(Lista*li){
  if(li == NULL)
    return -1;
  else
    return li->qtd;
}

//LISTA CHEIA
int lista_cheia(Lista*li){
  if(li == NULL){
    return -1;
  return (li->qtd == MAX); //se qtd == MAX, a lista está cheia
  }
}

//LISTA VAZIA
int lista_vazia(Lista* li){
  if(li == NULL)
    return -1;
  return(li->qtd == 0);
}

//INSERCAO NA LISTA FINAL
int insere_lista_final(Lista* li, struct aluno al){
  if(li == NULL){
    return 0;

    if(lista_cheia(li)){
      return 0;

    li->dados[li->qtd] = al;
    li->qtd++;
    return 1;
    }
  }
}
