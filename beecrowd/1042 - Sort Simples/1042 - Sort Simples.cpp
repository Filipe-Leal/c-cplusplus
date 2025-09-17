#include <iostream>

#define N 3
int main(){
  int valores[N], ordenado[N] = {0, 0, 0};
  int i, j, aux;

  for(i=0;i<=(3-1);i++){
    std::cin >> valores[i];
  }

  //REVISAR ORDENAÇÃO

  for(i=0;i<=(N-1);i++){
    std::cout << valores[i];
  }


}
