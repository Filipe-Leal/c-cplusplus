#include<iostream>
#include<windows.h>
#include<math.h>

int main(){
  SetConsoleOutputCP(CP_UTF8);

  //VARIAVEIS
  double raio, altura, volume;

  //ENTRADA DE DADOS
  std::cout << "Digite o valor do Raio.......: ";
  std::cin >> raio;
  std::cout << "Digite o valor da Altura.....: ";
  std::cin >> altura;

  //PROCESSAMENTO DE DADOS
  volume = 3.14159f*pow(raio,2)*altura;
  
  //SAIDA DE DADOS
  std::cout << "O Volume da lata de óleo é...: " << volume;

  return 0;
}

/*c) Calcular e apresentar o valor do volume de uma lata de óleo, utilizando a
fórmula: VOLUME <- 3.14159 * R ^ 2 * ALTURA.*/