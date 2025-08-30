#include<iostream>
#include<Windows.h>

int main(){
  SetConsoleOutputCP(CP_UTF8);

  //VARIAVEIS
  int numeroUm=10, mult, divisao;
  std::cout << "=========================================" << std::endl;
	std::cout << "==INCREMENTO==" << std::endl;
	std::cout << " Pós-incremento" << std::endl;
	std::cout << " variavel++ .......:(Adiciona 1 à variável)" << std::endl;
	std::cout << " 	Primeiro usa o valor da variável e depois incrementa" << std::endl;
	std::cout << "" << std::endl;
	std::cout << " Pré-incremento" << std::endl;
	std::cout << " ++variavel .......:(Adiciona 1 à variável)" << std::endl;
	std::cout << " 	Primeiro incrementa e depois usa o valor da variável" << std::endl;
	
	std::cout << "" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "===DECREMENTO==" << std::endl;
	std::cout << " Pós-decremento" << std::endl;
	std::cout << " variavel-- .......:(Subtrai 1 à variável)" << std::endl;
	std::cout << " 	Primeiro usa o valor da variável e depois decrementa" << std::endl;
	std::cout << "" << std::endl;
	std::cout << " Pré-decremento" << std::endl;
	std::cout << " --variavel .......:(Subtrai 1 à variável)" << std::endl;
	std::cout << " 	Primeiro decrementa e depois usa o valor da variável" << std::endl;
	std::cout << "=========================================" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "" << std::endl;
	
	
	std::cout << "variavel+=2 ..(variavel = variavel + 2)....:(Adiciona 2 ou qualquer valor à variável)" << std::endl;
	std::cout << "variavel-=2 ..(variavel = variavel + 2)....:(Subtrai 2 ou qualquer valor à variável)" << std::endl;
	std::cout << "variavel*=2 ..(variavel = variavel * 2)....:(Multiplica 2 ou qualquer valor à variável)" << std::endl;
	std::cout << "variavel/=2 ..(variavel = variavel / 2)....:(Divide 2 ou qualquer valor à variável)" << std::endl;

	
	
	std::cout << "" << std::endl;
	


std::cout << "" << std::endl;
  return 0;
}
