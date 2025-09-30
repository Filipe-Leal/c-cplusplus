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

  //ORDENACAO PRA QUE A RECEBA O MAIOR VALOR - VER DICA DO ALGORITMO EM BAIX ODO ARQUIVO
  if(A>B && A>C){
    cout << "MAIOR A" << endl;
    if(C>B){
      aux=B;
      B=C;
      C=aux;
    }
  } else if(B>A && B>C){
      aux=A;
      A=B;
      B=aux;
      if(C>B){
        aux=B;
        B=C;
        C=aux;
      }

    cout << "MAIOR B" << endl;
  } else if(C>A && C>B){
      aux=A;
      A=C;
      C=aux;
      if(C>B){
        aux=B;
        B=C;
        C=aux;
      }

    cout << "MAIOR C" << endl;
  }

  cout << A <<  B << C << endl;

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


/*


Algoritmo com Variáveis Auxiliares
Este método usa comparações se para determinar qual das três variáveis é a menor, qual é a do meio e qual é a maior, e então atribui os valores às variáveis menor, meio e maior.

    Entrada: Solicite ao usuário que digite três números e armazene-os em N1, N2 e N3.
    Comparação:
        Se N1 for o menor, compare N2 e N3 para determinar meio e maior.
        Se N2 for o menor, compare N1 e N3 para determinar meio e maior.
        Se N3 for o menor, compare N1 e N2 para determinar meio e maior.
    Saída: Exiba os valores das variáveis menor, meio e maior.

Algoritmo com Trocas (Método do C++, por exemplo)
Este método garante que o maior valor esteja em N1, o segundo maior em N2 e o menor em N3, usando uma variável temporária temp.

    Entrada: Receba os três números em N1, N2 e N3.
    Comparação 1: Compare N1 e N2. Se N2 > N1, troque os valores entre eles usando temp. Ao final, N1 terá o maior valor entre os dois.
    Comparação 2: Compare N1 e N3. Se N3 > N1, troque os valores. Agora, N1 tem o maior dos três números.
    Comparação 3: Compare N2 e N3. Se N3 > N2, troque os valores. Ao final, N2 terá o segundo maior e N3 o menor dos três números.
    Saída: Os números estarão em ordem decrescente em N1, N2 e N3 (N1 >= N2 >= N3).*/
