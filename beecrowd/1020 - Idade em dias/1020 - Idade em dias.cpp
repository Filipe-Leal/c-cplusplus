#include<iostream>

int main(){
  //VARIAVEIS
  int idadeDias;
  double ano, mes, dia;

  //INICIALIZAR
  ano=0;
  mes=0;
  dia=0;

  //ENTRADA DE DADOS
  std::cin >>  idadeDias;

  //PROCESSAMENTO DE DADOS
  ano=idadeDias/365; // Para encontrar o ano, vai dividr o dias por 365 dias
  mes=(idadeDias%365)/30; // Para encontrar o mes, vai encontra o resto do dias por 365 e com o resultado dividir por 30 dias
  dia=(idadeDias%365)%30; //Para encontra o dia,  vai encontra o resto do dias por 365 e com o resultado encontra o resto por 30 dias

  //Ou seja, o resultado da primeira equa��o idadeDias/365, consegue achar as seguintes
  //A hora � um tudo em que seu resto � o m�s. O m�s � um todo onde seu resto � os dias.
  //A equa��o idadeDias/365, vai resulta valor em anos, a equa��o idadeDias%365, vai resultar o resto em anos, onde deve ser lapidado, dividindo por 30 para o m�s...
  //... e encontrar� o resto por 30 para os dias

  //O resultado da divis�o e resto, vai resultar em anos, onde o resto de anos vai ser retirado o m�s, encontrando quantos dias 30(1 Mes) se tem no resto de anos (idadeDias%365)/30.
  // Encontrando o m�s,  do resto do m�s vai ser encontrado os dias (idadeDias%365)%30, o resto do m�s s�o os dias.


  //SAIDA DE DADOS
  std::cout << ano << " ano(s)" << std::endl;
  std::cout << mes << " mes(es)" << std::endl;
  std::cout << dia << " dia(s)" << std::endl;

  return 0;
}


/*

Leia um valor inteiro correspondente � idade de uma pessoa em dias e informe-a em anos, meses e dias

Obs.: apenas para facilitar o c�lculo, considere todo ano com 365 dias e todo m�s com 30 dias. Nos casos de teste nunca haver� uma situa��o que permite 12 meses e alguns dias, como 360, 363 ou 364. Este � apenas um exerc�cio com objetivo de testar racioc�nio matem�tico simples.
Entrada

O arquivo de entrada cont�m um valor inteiro.
Sa�da

Imprima a sa�da conforme exemplo fornecido.


*/
