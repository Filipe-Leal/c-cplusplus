#include<iostream>
#include<locale.h>
#include<string.h>

//ESTURTURA DO CADASTRO DAS PESSOAS
struct pessoas{
  char nome[100];
  char endereco[100];
  char telefone[13];
};
//FIM STRUCT

//VARIAVEIS GLOBAIS
pessoas registrosPessoas[3],
        auxiliarTrocador;

int i=0,
    quantidadePessoas = sizeof(registrosPessoas)/sizeof(registrosPessoas[0]);

bool houveCadastro = false;

//FIM VARIAVEIS GLOBAIS


//SUB-ROTINAS
void cadastrarPessoas(){
  for(i=0 ; i<quantidadePessoas ; i++){
    std::cout << "Cadastrar pessoas" << std::endl;
    std::cout << "Digite o nome da pessoa............: ";
    std::cin.get(registrosPessoas[i].nome, 100);
    std::cin.ignore();

    std::cout << "Digite o endereço da pessoa.........: ";
    std::cin.get(registrosPessoas[i].endereco, 100);
    std::cin.ignore();

    std::cout << "Digite o telefone da pessoa.........: ";
    std::cin.get(registrosPessoas[i].telefone, 13);
    std::cin.ignore();
    
    std::cout << std::endl;
  }//for
  houveCadastro = true;
 // ordenarRegistros();
}//cadastrar pessoas


/*void ordenarRegistros(){
  for(i=0 ; i<quantidadePessoas; i++){
    for(int j=0 ; j<quantidadePessoas; j++){
      if(strcmp(registrosPessoas[i].nome, registrosPessoas[j].nome) > 0){
       auxiliarTrocador = registrosPessoas[i]; 
       registrosPessoas[i] = registrosPessoas[j];
       registrosPessoas[j] = auxiliarTrocador;
      }//if
    }//for j  
  }//for i
}//ordenar registros
*/
void apresentarRegistros(){
  for(i=0 ; i<quantidadePessoas ; i++){
   std::cout << "Nome da pessoa............: " << registrosPessoas[i].nome << std::endl;
   std::cout << "Endereço..................: "<< registrosPessoas[i].endereco << std::endl;   
   std::cout << "Telefone..................: "<< registrosPessoas[i].telefone << std::endl;
   std::cout << std::endl;
  }//for
}//apresentar registros







//FIM SUB-ROTINAS

//PROTOTIPAR SUB-ROTINAS
void cadastrarPessoas();
void ordenarRegistros();
void apresentarRegistros();
//FIM PROTOTIPAR

int main(){
  setlocale(LC_ALL, "");  
  
  //VARIAVEIS
  bool parada = false;
  char opcao;

  //OPCAO DE ESCOLHA
  while(parada != true){
    std::cout << "[1] Registrar 10 pessoass" << std::endl;
    std::cout << "[2] Pesquisar 10 registros" << std::endl;
    std::cout << "[3] Apresentar todos os registros" << std::endl;
    std::cout << "[4] Sair do programa" << std::endl;
    std::cout << "Digite uma opção => ";
    std::cin.get(opcao); 
    std::cin.ignore();
   
    system("cls||clear"); 

    //SWITCH CASE
    switch(opcao){
      case '1':
        cadastrarPessoas(); 
      break; 
    
      case '2':

      break;

      case '3':
        apresentarRegistros();
        std::cin.ignore();
      break;
     
      case '4':
        parada = true;
      break; 
    
      default:
        std::cout << std::endl;
        std::cout << "Digite um opção válida" << std::endl;
        std::cout << std::endl;
      break;
    
    

    }//switch
  }//while
  
  
  
  
  

  return  0;
}
