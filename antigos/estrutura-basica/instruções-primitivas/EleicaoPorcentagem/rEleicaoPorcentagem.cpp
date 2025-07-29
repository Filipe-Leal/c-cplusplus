#include <iostream>
#include <math.h>
#include <iomanip>

int main(){
  //VARIAVEIS
  int candidatoA = 0, candidatoB = 0, candidatoC = 0, votosNulos = 0,
      votosBrancos = 0, totalCandidato = 0;

  double porcentagemVotosValidos = 0, votosValidos = 0, votosNulosBrancos = 0, porcentagemVotosNulosBrancos = 0;

  //ENTRADA DE DADOS
  std::cout << "Digite os votos do candidato A.:=> " ;
  std::cin >> candidatoA;
  std::cout << "Digite os votos do candidato B.:=> ";
  std::cin >> candidatoB;
  std::cout << "Digite os votos do candidato C.:=> ";
  std::cin >> candidatoC;
  std::cout << "Digite os votos brancos........:=> ";
  std::cin >> votosBrancos;
  std::cout << "Digite os votos nulos..........:=> ";
  std::cin >> votosNulos;
  std::cout << "\n";

  //PROCESSAMENTO DE DADOS
  totalCandidato = candidatoA+candidatoB+candidatoC+votosBrancos+votosNulos;
  votosNulosBrancos = votosBrancos+votosNulos;
  votosValidos = totalCandidato-votosNulosBrancos;

    //procentagem
  porcentagemVotosValidos = (100*votosValidos)/totalCandidato;
  porcentagemVotosNulosBrancos = (100*votosNulosBrancos)/totalCandidato;


  //SAIDA DE DADOS
  std::cout << std::fixed << std::setprecision(2); //com duas casas decimais 0,00
  std::cout << "Total dos candidatos.........................: " << totalCandidato << "\n";
  std::cout << "Total dos votos nulos e brancos..............: " << votosNulosBrancos << "\n";
  std::cout << "Porcentagem dos votos v�lidos................: " << porcentagemVotosValidos << "% \n";
  std::cout << "Porcentagem dos votos brancos e nulos........: " << porcentagemVotosNulosBrancos << "% \n";
  return 0;
}
/*
r) Em uma elei��o sindical concorreram ao cargo de presidente tr�s
candidatos (A, B e C). Durante a apura��o dos votos foram computados votos
nulos e votos em branco, al�m dos votos v�lidos para cada candidato. Deve
ser criado um programa de computador que efetue a leitura da quantidade
de votos v�lidos para cada candidato, al�m de efetuar tamb�m a leitura da
quantidade de votos nulos e votos em branco. Ao final o programa deve
apresentar o n�mero total de eleitores, considerando votos v�lidos, nulos e
em branco; o percentual correspondente de votos v�lidos em rela��o �
quantidade de eleitores; o percentual correspondente de votos v�lidos do
candidato A em rela��o � quantidade de eleitores; o percentual
correspondente de votos v�lidos do candidato B em rela��o � quantidade de
eleitores; o percentual correspondente de votos v�lidos do candidato C em
rela��o � quantidade de eleitores; o percentual correspondente de votos nulos
em rela��o � quantidade de eleitores; e por �ltimo o percentual
correspondente de votos em branco em rela��o � quantidade de eleitores.
*/
