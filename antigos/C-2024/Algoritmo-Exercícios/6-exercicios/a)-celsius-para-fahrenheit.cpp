#include<iostream>
#include<Windows.h>
#include<locale.h>

int main(){
  //PERMITIR SAIDA DE ACENTOS E UTF-8
//  setlocale(LC_ALL, "portuguese");
  SetConsoleOutputCP(CP_UTF8);

  //VARIAVEIS
	float celsius=0, fahrenheit=0;
  

  //ENTRADA DE DADOS
	std::cout << "" << std::endl;
	std::cout << "a) Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit. A fórmula de conversão é: F<- (9* C + 160)/5, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius." << std::endl;;
	std::cout << "" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "Digite a temperatura em graus Celsius....: ";
	std::cin >> celsius;
	std::cout << "" << std::endl;

	//CONVERSÃO CELSIUS -> FAHRENHEIT
	fahrenheit = (9*celsius+160)/5;
	
	//SAIDA DE DADOS
	std::cout << celsius << "°C = " << fahrenheit << "°F" << std::endl;

	std::cout << "" << std::endl;
	
  return 0;
}
