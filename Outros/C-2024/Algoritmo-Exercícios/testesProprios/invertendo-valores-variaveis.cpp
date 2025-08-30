#include<iostream>
#include<Windows.h>

int main(){
	SetConsoleOutputCP(CP_UTF8);
	
	int numero=10;
	
	std::cout << "" << std::endl;
	std::cout << "Valor da variável: " << numero << std::endl;
	std::cout << "" << std::endl;
	std::cout << "==Forma tradicional==" << std::endl;;
	std::cout << "numero = numero * -1;" << std::endl;
	
	//NEGATIVANDO
	numero = numero * -1;
	
	//SAIDA DO VALOR NEGATIVADO
	std::cout << "Valor: " << numero << std::endl;
	std::cout << "=====================" << std::endl;
	
	//RETOMADA DO VALOR 10
	numero=10;
	
	std::cout << "" << std::endl;	
	std::cout << "==Na saída de dados==" << std::endl;
	std::cout << "std::cout << -numero << std::endl" << std::endl;
	
	//NEGATIVANDO O VALOR SOMENTE NA SAIDA DE DADOS
	std::cout << "Valor: " << -numero << std::endl;
	std::cout << "NÃO ADICIONA O VALOR NA VARIÁVEL, APENAS SAI NEGATIVO NA SAÍDA DE DADOS" << std::endl;
	std::cout << "=====================" << std::endl;
	std::cout << "" << std::endl;
	
	std::cout << "==Forma simplificada==" << std::endl;
	std::cout << "numero*=-1;" << std::endl;
	
	numero*=-1;
	
	std::cout << "Valor: " << numero << std::endl;
	std::cout << "======================" << std::endl;
	std::cout << "" << std::endl;
	
	numero=10;
	
	std::cout << "==De forma mais simplificada ainda==" << std::endl;
	std::cout << "numero=-numero;" << std::endl;
	numero=-numero;
	std::cout << "Valor: " << numero << std::endl;
	std::cout << "====================================" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "" << std::endl;
	
	return 0;
}