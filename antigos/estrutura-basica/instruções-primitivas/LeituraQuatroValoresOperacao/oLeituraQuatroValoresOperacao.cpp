#include <iostream>;

int main(){

  //VARIAVEIS
  int valorUm = 0, valorDois = 0,
      valorTres = 0, valorQuatro = 0,
      produto = 0, soma = 0;

  //ENTRADA DE DADOS
  std::cout << "Digite o primeiro valor => ";
  std::cin >> valorUm;

  std::cout << "Digite o segundo valor => ";
  std::cin >> valorDois;

  std::cout << "Digite o três valor => ";
  std::cin >> valorTres;

  std::cout << "Digite o quatro valor => ";
  std::cin >> valorQuatro;

  //PROCESSAMENTO DE DADOS
  produto = valorUm*valorTres;
  soma = valorDois+valorQuatro;

  std::cout << "\n";

  //SAIDA DE DADOS
  std::cout << "Produto: " << produto << "\n";
  std::cout << "Soma: " << soma;

  return 0;
}

/*

o) Elaborar um programa de computador que efetue a leitura de quatro
valores inteiros (variáveis A, B, C e D). Ao final o programa deve apresentar
o resultado do produto (variável P) do primeiro com o terceiro valor, e o
resultado da soma (variável S) do segundo com o quarto valor.

*/
