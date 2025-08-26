#include <stdio.h>

int main(){
    //VARIAVEIS
    int values[10];
    int i, referenceNum=0, sumSmall=0, referenceQuanti=0;

    for(i=0; i<=9; i++){
        printf("Digite o %d valor...: ", i+1);
        scanf("%d", &values[i]);
    }

    printf("\n");

    printf("Escolha um valor de referência...: ");
    scanf("%d", &referenceNum);

    printf("\n");

    //maiiores que refencia
    for(i=0;i<9;i++){
        if(referenceNum < values[i]){
            printf("%d é maior que %d \n", values[i], referenceNum);
        } else {
            //menores que referencia
            sumSmall++;
        }

        //quantas vezes aparece
        if(referenceNum == values[i]){
            referenceQuanti++;
        }
    }
    printf("%d números são menores que %d \n", sumSmall, referenceNum);
    printf("%d aparece %d vezes", referenceNum, referenceQuanti);


    return 0;

}




/*4.Faça  um  programa  que  leia  10  números  inteiros,  armazene-os  em  um  
vetor,  solicite  um  valor  de referência inteiro e: 
a)imprima os números do vetor que são maiores que o valor referência 
b)retorne quantos números armazenados no vetor são menores que o valor de referência 
c)retorne quantas vezes o valor de referência aparece no vetor*/