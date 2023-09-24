#include <iostream>

//using namespace std;

int main(){

    //VARIAVEIS
    double celsius = 0, fahrenheit = 0;

    //ENTRADA DE DADOS
    std::cout << "Digite a temperatura em Celsius => ";
    std::cin >> celsius;

    //PROCESSAMENTO DE DADOS
    fahrenheit = (9 * celsius + 160)/5;

    //SAIDA DE DADOS
    std::cout << celsius << "°C = " << fahrenheit << "°F";

    return 0;
}


/*

a) Ler uma temperatura em graus Celsius e apresentá-la convertida em graus
Fahrenheit. A fórmula de conversão é: F<- (9* C + 160)/5, sendo F a
temperatura em Fahrenheit e C a temperatura em Celsius.

*/
