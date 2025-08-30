#include<iostream>

int main(){
  //VARIAVEIS
  int segundosTotal;
  double hora, minuto, segundosHora;

  //ENTRADA DE DADOS
  std::cin >> segundosTotal;

  //PROCESSAMENTO DE DADOS
  hora=segundosTotal/3600; // -> Encontrar a hora, divide o hor�rio em segundos por 3600 segundos.
  minuto=(segundosTotal%3600)/60; //-> Encontra os minutos, encontre o resto do hor�rio em segundos entre 3600 e com o resultado divide por 60
  segundosHora=(segundosTotal%3600)%60; // Encontra os segundos,encontre o resto do hor�rio em segundos entre 3600 e com o resultado encontra o resto com 60



  //SAIDA DE DADOS
  std::cout << hora << ":" << minuto << ":" << segundosHora << std::endl;

  return 0;
}



/*


Leia um valor inteiro, que � o tempo de dura��o em segundos de um determinado evento em uma f�brica, e informe-o expresso no formato horas:minutos:segundos.
Entrada

O arquivo de entrada cont�m um valor inteiro N.
Sa�da

Imprima o tempo lido no arquivo de entrada (segundos), convertido para horas:minutos:segundos, conforme exemplo fornecido.



*/
