#include <iostream>

int main(){
 int a, b, c, maiorAB, maior;
 std::cin >>a>>b>>c;
 maiorAB = (a+b+std::abs(a-b))/2;
 maior = (maiorAB+c+std::abs(maiorAB-c))/2;
 std::cout <<maior<< " eh o maior" << std::endl;

 return 0;
}

/*

 da internet

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int a, b, c, maiorAb, maior;
    cin >> a >> b >> c;
    maiorAb = (a+b+abs(a-b))/2;
    maior = (maiorAb+c+abs(maiorAb-c))/2;
    cout << maior << " eh o maior" << endl;

    return 0;
}*/
