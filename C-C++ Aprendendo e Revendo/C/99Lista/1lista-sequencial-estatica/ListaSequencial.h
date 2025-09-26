
//TAMANHO DE MAX DEFINIDO COMO 100
#define MAX 100

//DADOS DE ALUNO, UTLIZADOS NA LISTA
struct aluno{
  int matricula;
  char nome[30];
  float n1,n2,n3;
};

//CRIA UM APELIDO lista chamada LISTA
typedef struct lista Lista;

Lista*cria_lista();

void libera_lista(Lista*li);

int tamanho_lista(Lista*li);

int lista_cheia(Lista*li);

int lista_vazia(Lista* li);

int insere_lista_final(Lista* li, struct aluno al);

