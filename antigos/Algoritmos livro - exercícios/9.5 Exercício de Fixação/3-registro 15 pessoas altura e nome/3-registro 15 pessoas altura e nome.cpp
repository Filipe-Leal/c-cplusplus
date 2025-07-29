#include<iostream>
#include<locale.h>
#include<string.h>


struct pessoas{
      char nome[100];
      double altura;
};

int main(){
  setlocale(LC_ALL, "");

  //VARIAVEIS
  pessoas cadastrarPessoas[15];
  pessoas auxiliarTrocador;
  int i=0, opcaoEscolhida, quantidadeRegistro = sizeof(cadastrarPessoas)/sizeof(cadastrarPessoas[0]);;
  double mediaAltura=0;
  bool parada, cadastrou = false;

  //PROGRAMA
  parada = true;
  while(parada != false){

    //TELA
    std::cout << "  Escolha uma opção." << std::endl;
    std::cout << std::endl;
    std::cout << "[0] Cadastrar 15 registros" << std::endl;
    std::cout << "[1] Mostrar pessoas menores que 1.5 m" << std::endl;
    std::cout << "[2] Mostrar pessoas maiores que 1.5 m" << std::endl;
    std::cout << "[3] Mostrar pessoas maiores que 1.5 e menor que 2.0" << std::endl;
    std::cout << "[4] Apresentar todos os registros" << std::endl;
    std::cout << "[5] Sair do programa" << std::endl;
    std::cout << std::endl;
    std::cout << "-> ";
    std::cin >> opcaoEscolhida;
    std::cout << std::endl;
    system("cls||clear");
    //FIM TELA

    //ESCOLHA
    switch(opcaoEscolhida){

      case 0:
        //REGISTRAR PESSOAS
        std::cout << "Cadastre pessoas." << std::endl;
        for(i=0; i<quantidadeRegistro ; i++){
          std::cin.ignore();
          std::cout << "Nome............: ";
          std::cin.get(cadastrarPessoas[i].nome, 100);
          std::cin.ignore();
          std::cout << "Altura..........: ";
          std::cin >> cadastrarPessoas[i].altura;
          std::cout << std::endl;

          // a += b; || a = a + b;
          //MEDIA ALTURA - SOMA
          mediaAltura += cadastrarPessoas[i].altura;

        }//for

        //MEDIA ALTURA
        mediaAltura = mediaAltura/4;

        //ORDENACAO - por nomes
        for(i=0 ; i<quantidadeRegistro ; i++){
          for(int j=0 ; j<quantidadeRegistro ; j++){
            if(strcmp(cadastrarPessoas[i].nome, cadastrarPessoas[j].nome) > 0 ){
              auxiliarTrocador = cadastrarPessoas[i];
              cadastrarPessoas[i] = cadastrarPessoas[j];
              cadastrarPessoas[j] = auxiliarTrocador;
            }//for
          }//for j
        }//for i
        //FIM ORDENACAO

        cadastrou = true;
        break;
        //FIM REGISTRAR PESSOAS


      case 1:
        //APRESENTAR ALTURA MENOR OU IGUAL A 1.5
        if(cadastrou == true){
          std::cout << "Saída dos registros. Altura menor ou igual a 1.5" << std::endl;
          for(i=0 ; i<quantidadeRegistro ; i++){
            if(cadastrarPessoas[i].altura <= 1.5){
              std::cout << "Nome..............: " << cadastrarPessoas[i].nome << std::endl;
              std::cout << "Altura............: " << cadastrarPessoas[i].altura << std::endl;
              std::cout << std::endl;
            }//if
          }//for
        }else{
          std::cout << "Cadastre Primeiro!" << std::endl;
        }//if
        break;
        //FIM APRESENTAR ALTURA MENOR OU IGUAL A 1.5


      case 2:
        //APRESENTAR ALTURA MAIOR QUE 1.5
        if(cadastrou == true){
          std::cout << "Saída dos registros. Altura maior que 1.5" << std::endl;
          for(i=0 ; i<quantidadeRegistro ; i++){
            if(cadastrarPessoas[i].altura > 1.5){
              std::cout << "Nome..............: " << cadastrarPessoas[i].nome << std::endl;
              std::cout << "Altura............: " << cadastrarPessoas[i].altura << std::endl;
              std::cout << std::endl;
            }//if
          }//for
        }else{
          std::cout << "Cadastre Primeiro!" << std::endl;
        }//if
        break;
        //FIM APRESENTAR ALTURA MAIOR QUE 1.5


      case 3:
        //APRESENTAR ALTURA MAIOR QUE 1.5 E MENOR Q 2.0
        if(cadastrou == true){
          std::cout << "Saída dos registros. Altura maior que 1.5 e menor que 2.0" << std::endl;
          for(i=0 ; i<quantidadeRegistro ; i++){
            if(cadastrarPessoas[i].altura > 1.5 && cadastrarPessoas[i].altura < 2.0){
              std::cout << "Nome..............: " << cadastrarPessoas[i].nome << std::endl;
              std::cout << "Altura............: " << cadastrarPessoas[i].altura << std::endl;
              std::cout << std::endl;
            }//if
          }//for
        }else{
          std::cout << "Cadastre Primeiro!" << std::endl;
        }//if
        break;
        //FIM APRESENTAR ALTURA MAIOR QUE 1.5 E MENOR Q 2.0

      case 4:
        //APRESENTAR TODOS OS REGISTROS
        if(cadastrou == true){
          std::cout << "Saída de todos os registros." << std::endl;
          for(i=0 ; i<quantidadeRegistro ; i++){
            std::cout << "Nome..............: " << cadastrarPessoas[i].nome << std::endl;
            std::cout << "Altura............: " << cadastrarPessoas[i].altura << std::endl;
            std::cout << std::endl;
          }//for
        }else{
          std::cout << "Cadastre Primeiro!" << std::endl;
        }//if
        break;
        //FIM APRESENTAR TODOS OS REGISTROS

      case 5:
        //SAIR DO PROGRAMA
        parada = false;
        break;
        //FIM SAIR DO PROGRAMA
    }//switch-case
  }//while

  return 0;
}
