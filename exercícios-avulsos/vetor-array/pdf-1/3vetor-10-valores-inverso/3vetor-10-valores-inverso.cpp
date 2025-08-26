#include <stdio.h>

int main(){
    
    int value[10];
    int i;

    //ENTRADA
    for(i=0;i<=9;i++){
        printf("Digite o %d valor...: ", i+1);
        scanf("%d", &value[i]);
    }


    ///SAIDA E PROCESSAMENTO
    for(i=9;i>=0;i--){
        printf("%d \n", value[i]);
    }

    
}

/*3.Faça um programa que leia 10 valores reais e os apresente na ordem inversa entrada. */