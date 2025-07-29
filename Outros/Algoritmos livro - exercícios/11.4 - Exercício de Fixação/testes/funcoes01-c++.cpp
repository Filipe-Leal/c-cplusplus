#include<iostream>
#include<locale.h>
#include<string.h>

//precisa prototipar a funcao para ela poder ser chamada
void texto();
void soma(int numUm, int numDois);
int somaDois(int numUm, int numDois);
void transporteFunc(std::string trans[4]);


int main(){
  setlocale(LC_ALL, "");

  //VARIAVEIS
  int resultado;
  std::string transporte[4]={"carro", "moto", "barco", "aviao"};


  //PROCESSAMENTO DE DADOS
  resultado = somaDois(74, 80); //precisa armazenar a funcao com retorno em algum variavel



  //SAIDA
  soma(15, 5);

  std::cout << "Valor da soma: " << resultado << "\n";

  transporteFunc(transporte);



  return 0;
}



//retorno void, pq não retorna nada.
void texto(){
  std::cout << "Teste de emissão de texto da função\n";
}

void soma(int numUm, int numDois){
  std::cout << "Soma dos valores: "<< numUm+numDois << "\n";
}

//funcao com retorno
int somaDois(int numUm, int numDois){
  return numUm+numDois;
}

void transporteFunc(std::string trans[4]){
  for(int i=0 ; i<4 ; i++){
    std::cout << trans[i] << "\n";

  }//for
}//void
