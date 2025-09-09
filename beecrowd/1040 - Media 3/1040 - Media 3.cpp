#include <iostream>
#include <iomanip>

# define tmnh 4

int main(){

  std::cout << std::setprecision(1) << std::fixed;

  double numeros[tmnh];
  double media=0;

  double pesos[tmnh] = {2, 3, 4, 1};
  int i=0;

  for(i=0; i<=(tmnh-1); i++){
    std::cin >> numeros[i];
    fflush(stdin);
    numeros[i] *= pesos[i];
    media = media + numeros[i];
     std::cout << " " << media << std::endl;
  }

  for(i=0; i<=(tmnh-1); i++){
    std::cout << " " << media << std::endl;
  }







  return 0;
}
