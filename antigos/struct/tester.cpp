#include<iostream>
#include<bits/stdc++.h>
#include<cstring>
//#include<string.h>

int main(){

  //ORDENAR COM sort
  /*char palavra[4] = {'d', 'c', 'a', 'b'};

  std::sort(palavra.begin(), palavra.end());

  std::cout << palavra;*/


  //ORDENAR COM strcmp
  char testeUm[] = "a", testeDois[] = "b", testeTres[] = "a";
  int resultadoUm = strcmp(testeUm, testeDois),  resultadoDois = strcmp(testeDois, testeUm), resultadoTres = strcmp(testeUm, testeTres);

  std::cout << "Resultado um: a - b " << resultadoUm << std::endl << "Resultado dois: b - a "  << resultadoDois << std::endl << "Resultado Três: a - a" << resultadoTres << std::endl;



  return 0;
}
