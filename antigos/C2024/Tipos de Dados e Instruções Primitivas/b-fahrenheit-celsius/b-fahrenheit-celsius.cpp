#include<iostream>
//#include<locale.h>
#include<Windows.h>

int main(){
 // setlocale(LC_ALL, "portuguese");
  SetConsoleOutputCP(CP_UTF8);

  //VARIAVEIS
  float celsius, fahrenheit;

  //ENTRADA DE DADOS
  std::cout << "Digite a temperatura em ­°F..: ";
  std::cin >> fahrenheit;

  //PROCESSAMENTO DE DADOS
 // celsius = (fahrenheit-32)*(5/9);
  celsius = (fahrenheit-32)*(5.0f/9.0f);

  //SAIDA DE DADIS
  std::cout << "" << std::endl;
  std::cout << "Temperatura em °C....: " << celsius << std::endl; 
  std::cout << "Temperatura em °F....: " << fahrenheit << std::endl; 

  return 0;  
}


/*
b) Ler uma temperatura em graus Fahrenheit e apresentá-la convertida em graus
Celsius. A fórmula de conversão é: C <- (F-32) * (5/9), sendo F a temperatura em
Fahrenheit e C a temperatura em Celsius.
*/