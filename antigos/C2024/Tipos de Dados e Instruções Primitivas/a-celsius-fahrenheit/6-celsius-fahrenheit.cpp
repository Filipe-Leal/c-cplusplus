#include<iostream>
//#include<locale.h>
#include<Windows.h>

int main(){
 // setlocale(LC_ALL, "portuguese");
  SetConsoleOutputCP(CP_UTF8);

  //VARIAVEIS
  float celsius, fahrenheit;

  //ENTRADA DE DADOS
  std::cout << "Digite a temperatura em ­°C..: ";
  std::cin >> celsius;

  //PROCESSAMENTO DE DADOS
  fahrenheit = (9*celsius+160)/5;

  //SAIDA DE DADIS
  std::cout << "" << std::endl;
  std::cout << "Temperatura em °C....: " << celsius << std::endl; 
  std::cout << "Temperatura em °F....: " << fahrenheit << std::endl; 

  return 0;  
}