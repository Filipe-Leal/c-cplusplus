#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;


void qualTraingulo(double A_func, double B_func, double C_func){
  double A=0, B=0, C=0;
  if(A>=(B+C)){
    cout << "NAO FORMA TRIANGULO" << endl;

  } else if(pow(A, 2) == (pow(B,2) + pow(C,2))){
    cout << "TRIANGULO RETANGULO" << endl;
  }
}



int main(){
  cout << setprecision (1) << fixed;

  double aux=0, A=0, B=0, C=0;

  cin >> A >> B >> C;

  //ORDENACAO PRA QUE A RECEBA O MAIOR VALOR
  if(B>A && B>C){
    aux=A;
    A=B;
    B=aux;
  } else if(C>A && C>B){
    aux=A;
    A=C;
    C=aux;
  }


 // if(A==B && B==C){
    qualTraingulo(A, B, C);
   // cout << "TRIANGULO EQUILATERO" << endl;
 // }

}


/*

Leia 3 valores de ponto flutuante A, B e C e ordene-os em ordem decrescente, de modo que o lado A representa o maior dos 3 lados. A seguir, determine o tipo de triângulo que estes três lados formam, com base nos seguintes casos, sempre escrevendo uma mensagem adequada:

    se A ≥ B+C, apresente a mensagem: NAO FORMA TRIANGULO
    se A2 = B2 + C2, apresente a mensagem: TRIANGULO RETANGULO
    se A2 > B2 + C2, apresente a mensagem: TRIANGULO OBTUSANGULO
    se A2 < B2 + C2, apresente a mensagem: TRIANGULO ACUTANGULO
    se os três lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO
    se apenas dois dos lados forem iguais, apresente a mensagem: TRIANGULO ISOSCELES

Entrada

A entrada contem três valores de ponto flutuante de dupla precisão A (0 < A) , B (0 < B) e C (0 < C).
Saída

Imprima todas as classificações do triângulo especificado na entrada.

*/
