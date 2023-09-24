#include<iostream>
#include<locale.h>
#include<string.h>
#include<stdlib.h>

int main(){

  setlocale(LC_ALL, "");

  //VARIAVEIS
  char palavra[50], tarja[50], tentativasDaPalavra[1];
  int tamanhoDaPalavra = 0, quantidadeDeTentativas = 0, acertivaLetras = 0;

  //ENTRADA DA PALAVRA
  std::cout << "Peça para seu colega fechar os olhos ou não olhar para tela." << std::endl;
  std::cout << "Digite uma palavra....: ";
  std::cin >> palavra;

  tamanhoDaPalavra = strlen(palavra); //PEGANDO A QUANTIDADE DE LETRAS
  quantidadeDeTentativas = tamanhoDaPalavra; //A QUANTIDADE DE TENTIVAS E MESMA DA LETRA

  // std::cout << "Tamanho.....: " << tamanhoDaPalavra << std::endl; //VERIFICACAO DO TAMANHO DA PALAVRA

  //TARJANDO A PALAVRA - para adivinhação
  for(int i=0 ; i<tamanhoDaPalavra ; i++){
  //  std::cout << palavra[i] << std::endl; //VERIFICACAO
    tarja[i] = '-';
  }//for

  std::cout << std::endl;

  system("cls");

  //TENTATIVAS
  while(true){
    //SAIDA DA PALAVRA TARJADA - para adivinhação
    std::cout << "Palavra: ";
    for(int i=0 ; i<tamanhoDaPalavra ; i++){
      std::cout << tarja[i];
    }//for saida da palavra tarjada

    std::cout << std::endl;

    std::cout << "Você possui " << quantidadeDeTentativas << " tentativa...: ";
    std::cin >> tentativasDaPalavra[0];

    system("cls");

    //SAIDA TESTE
   // std::cout << acertivaLetras << std::endl;

    //VARIAVEL LOCAL
    int letraExiste = 0; //VARIAVEL DA DECREMENTACAO DAS TENTATIVAS

    //VERIFICACAO DA LETRA
    for(int i=0 ; i < palavra[i] ; i++){
      if(tentativasDaPalavra[0] == palavra[i]){

        letraExiste=1;

        //  std::cout << "EXISTE" << i << std::endl;

        //SE MESMA LETRA FOR DIGITADA
        if(tentativasDaPalavra[0] == tarja[i]){
          std::cout << "LETRA JÁ DIGITADA, DIGITE OUTRA LETRA" << std::endl;
          acertivaLetras--; //DESCREMENTA CASO DIGITAR A MESMA LETRA
        }//if mesma letra digitada

        tarja[i] = tentativasDaPalavra[0];
        acertivaLetras++; //INCREMENTA CASO A LETRA EXISTIR EM PALAVRA

      }//if verificacao letra
    }//for verificacao letra

    // letraExiste = 0 letra NÃO existe
    // letraExiste = 1 letra EXISTE

    //DECREMENTACAO DAS TENTATIVAS - CASO A LETRA NAO EXISTA
    if(letraExiste != 1){
      quantidadeDeTentativas--;
    }//if decrementacao das tentativas


    //FLAG PARADA - PERDEU
    if(quantidadeDeTentativas == 0){
      std::cout << "VOCÊ PERDEU!" << std::endl;
      break;
    }//if parada break perdeu

    //FLAG PARADA - GANHOU
    if(acertivaLetras == tamanhoDaPalavra){
      std::cout << "VOCÊ VENCEU" << std::endl;
      break;
    }//if parada break ganhou

  }//while true tentativas

  return 0;
}//int main
