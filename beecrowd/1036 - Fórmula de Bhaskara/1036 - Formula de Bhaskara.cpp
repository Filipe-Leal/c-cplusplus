#include <iostream>
#include <math.h>

void bhaskara(float a_func, float b_func, float c_func){
  float delta=0, xPositivo=0, xNegativo=0;

  delta=pow(b_func, 2)-4*a_func*c_func;
  printf("%s", delta);
  /*if(delta>0 || delta==0){
    xPositivo = (-b_func+sqrt(delta))/2*a_func;
    xNegativo = (-b_func-sqrt(delta))/2*a_func;

    std::cout << "R1 = " << xPositivo << std::endl;
    std::cout << "R2 = " << xNegativo << std::endl;
  } else {
    std::cout << "Impossivel calcular";
  }

*/




}


int main(){
  float a=0, b=0, c=0;

  std::cin >> a >> b >> c;

  bhaskara(a, b, c);



  return 0;
}
