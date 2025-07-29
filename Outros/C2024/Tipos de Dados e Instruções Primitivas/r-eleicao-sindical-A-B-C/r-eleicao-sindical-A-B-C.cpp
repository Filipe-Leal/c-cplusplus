#include<iostream>
#include<windows.h>

int main(){
  SetConsoleOutputCP(CP_UTF8);

  //VARIAVEIS///////////////////////////////////////////////////
  float a_votoValido, b_votoValido, c_votoValido,
      a_votoNulo, b_votoNulo, c_votoNulo,
      a_votoBranco, b_votoBranco, c_votoBranco,
      totalA, totalB, totalC, totalEleitor, totalValido,
      totalValido_porcem, a_valido_porcem, b_valido_porcem,
      c_valido_porcem, totalNulo, totalNulo_porcem, totalBranco,
      totalBranco_porcem;

  //////////////////////////////////////////////////////////////

  //ENTRADA DE DADOS///////////////////////////////////////////
  std::cout << "=== CANDIDATO A ===" << std::endl;
  std::cout << "Digite votos válidos....: " ;
  std::cin >> a_votoValido;
  std::cout << "Digite votos nulos......: " ;
  std::cin >> a_votoNulo;
  std::cout << "Digite votos brancos....: " ;
  std::cin >> a_votoBranco;
  std::cout << "===================" << std::endl;

  std::cout << "" << std::endl;

  std::cout << "=== CANDIDATO B ===" << std::endl;
  std::cout << "Digite votos válidos....: " ;
  std::cin >> b_votoValido;
  std::cout << "Digite votos nulos......: " ;
  std::cin >> b_votoNulo;
  std::cout << "Digite votos brancos....: " ;
  std::cin >> b_votoBranco;
  std::cout << "===================" << std::endl;

  std::cout << "" << std::endl;

  std::cout << "=== CANDIDATO C ===" << std::endl;
  std::cout << "Digite votos válidos....: " ;
  std::cin >> c_votoValido;
  std::cout << "Digite votos nulos......: " ;
  std::cin >> c_votoNulo;
  std::cout << "Digite votos brancos....: " ;
  std::cin >> c_votoBranco;
  std::cout << "===================" << std::endl;

  std::cout << "" << std::endl;
  std::cout << "" << std::endl;

  //////////////////////////////////////////////////////////////


  //PROCESSAMENTO DE DADOS/////////////////////////////////////
  totalA = a_votoValido + a_votoNulo + a_votoBranco;
  totalB = b_votoValido + b_votoNulo + b_votoBranco;
  totalC = c_votoValido + c_votoNulo + c_votoBranco;
  totalEleitor = totalA+totalB+totalC;
  
  totalValido = a_votoValido+b_votoValido+c_votoValido;
  totalValido_porcem = (totalValido*100)/totalEleitor;

  a_valido_porcem = (a_votoValido*100)/totalEleitor;
  b_valido_porcem = (b_votoValido*100)/totalEleitor;
  c_valido_porcem = (c_votoValido*100)/totalEleitor;

  totalNulo = a_votoNulo + b_votoNulo + c_votoNulo;
  totalNulo_porcem = (totalNulo*100)/totalEleitor;

  totalBranco = a_votoBranco + b_votoBranco + c_votoBranco;
  totalBranco_porcem = (totalBranco*100)/totalEleitor;

  /////////////////////////////////////////////////////////////

  //SAIDA DE DADOS////////////////////////////////////////////
  std::cout << "=== SAÍDA DAS INFORMAÇÕES === " << std::endl;
  std::cout << "TOTAL DE ELEITORES.............................: " << totalEleitor << std::endl;
  std::cout << "PORCENTAGEM TOTAL VOTOS VÁLIDOS................: " << totalValido_porcem << "%" << std::endl;
  std::cout << "PORCENTAGEM TOTAL NULOS........................: " << totalNulo_porcem << "%" <<  std::endl;
  std::cout << "PORCENTAGEM TOTAL BRANCOS......................: " << totalBranco_porcem << "%" <<  std::endl;

  std::cout << "" << std::endl;

  std::cout << "-CANDIDATO A-" << std::endl;
  std::cout << "PORCENTAGEM VOTOS VÁLIDOS......................: " << a_valido_porcem << "%" <<  std::endl;
  std::cout << "-------------" << std::endl;
  
  std::cout << "" << std::endl;
  
  std::cout << "-CANDIDATO B-" << std::endl;
  std::cout << "PORCENTAGEM VOTOS VÁLIDOS......................: " << b_valido_porcem << "%" <<  std::endl;
  std::cout << "-------------" << std::endl;

  std::cout << "" << std::endl;

  std::cout << "-CANDIDATO C-" << std::endl;
  std::cout << "PORCENTAGEM VOTOS VÁLIDOS......................: " << c_valido_porcem << "%" <<  std::endl;
  std::cout << "-------------" << std::endl;

  std::cout << "" << std::endl;


  return 0;
}







/*
r) Em uma eleição sindical concorreram ao cargo de presidente três
candidatos (A, B e C). Durante a apuração dos votos foram computados votos
nulos e votos em branco, além dos votos válidos para cada candidato. Deve
ser criado um programa de computador que efetue a leitura da quantidade
de votos válidos para cada candidato, além de efetuar também a leitura da
quantidade de votos nulos e votos em branco. Ao final o programa deve
apresentar o número total de eleitores, considerando votos válidos, nulos e
em branco; o percentual correspondente de votos válidos em relação à
quantidade de eleitores; o percentual correspondente de votos válidos do
candidato A em relação à quantidade de eleitores; o percentual
correspondente de votos válidos do candidato B em relação à quantidade de
eleitores; o percentual correspondente de votos válidos do candidato C em
relação à quantidade de eleitores; o percentual correspondente de votos nulos
em relação à quantidade de eleitores; e por último o percentual
correspondente de votos em branco em relação à quantidade de eleitores. 
  
*/