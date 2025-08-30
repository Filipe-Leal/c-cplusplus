#include<iostream>
#include<locale.h>

//C++ NÃO PERMITE FUNÇÃO DENTRO DE FUNÇÃO

//ROTINAS
/*void trocaValoresExUm(){
  //VARIAVEIS
  int valorUm,
      valorDois,
      valorTres;

  std::cout << "Digite o primeiro valor => ";
  std::cin >> valorUm;
  std::cout << "Digite o segundo valor => ";
  std::cin >> valorDois;

  valorTres = valorUm;
  valorUm = valorDois;
  valorDois = valorTres;

  std::cout << "Primeiro valor = " << valorUm << " Segundo valor = " << valorDois << "\n";
}*/

int troca(int vUm, int vDois){
  int valorTres;

  valorTres = vUm;
  vUm = vDois;
  vDois = valorTres;

  std::cout << "Primeiro valor = " << vUm << " Segundo valor = " << vDois << " Terceiro valor = " << valorTres << "\n";
}

void trocaValoresExDois(){
  //VARIAVEIS
  int valorUm,
      valorDois;

  std::cout << "Digite o primeiro valor => ";
  std::cin >> valorUm;
  std::cout << "Digite o segundo valor => ";
  std::cin >> valorDois;

  troca(valorUm, valorDois);

}//troca de valor dois
//FIM ROTINAS

void trocaValoresExUm();
void trocaValoresExDois();
int troca(int vUm, int vDois);

int main(){
  setlocale(LC_ALL, "");

  trocaValoresExDois();


  return 0;
}
