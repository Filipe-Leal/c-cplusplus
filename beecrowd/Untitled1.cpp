// 01/11/2024


//Área
// beecrowd | 1012

#include <iostream>
#include <math.h>
#include <iomanip>

int main(){
 //VARIAVEIS
  float A,B,C;
  float areaTriangulo, areaCirculo, areaTrapezio, areaQuadrado, areaRetangulo;

 //ENTRADA DE DADOS
 std::cin >> A;
 std::cin >> B;
 std::cin >> C;

 //PROCESSAMENTO DE DADOS
 areaTriangulo = (A*C)/2; //a=base * c=altura
 areaCirculo = 3.14159*pow(C,2);
 areaTrapezio = (A+B)*C/2;
 areaQuadrado = B*B;
 areaRetangulo = A*B;

 //SAIDA DE DADOS
 std::cout << "TRIANGULO: " << std::fixed << std::setprecision(3) << areaTriangulo << std::endl;
 std::cout << "CIRCULO: " << areaCirculo << std::endl;
 std::cout << "TRAPEZIO: " << areaTrapezio << std::endl;
 std::cout << "QUADRADO: " << areaQuadrado << std::endl;
 std::cout << "RETANGULO: " << areaRetangulo << std::endl;


 return 0;
}
