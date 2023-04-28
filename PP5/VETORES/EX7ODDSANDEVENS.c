#include <stdio.h>
#include <stdlib.h>

int parity(int x);                  //função que checa paridade de um número.

int main(){
    //var.
    int array[6], i, evenSum = 0, oddQ = 0;    //evenSum = soma dos números pares. oddQ = quantidade de ímpares.

    printf("Insira 6 (seis) numeros inteiros.\n>> ");
    for(i = 0; i < 6; i++){
        scanf("%d", &array[i]);
    }

    printf("\n\n");

    //loops de checagem de pares e ímpares.
    printf("\tPares: ");
    for(i = 0; i < 6; i++){
        if(!parity(array[i])){
            printf("%d ", array[i]);
            evenSum += array[i];
        }
    }
    printf("\n\tSoma dos pares: %d\n\n", evenSum);

    printf("\tImpares: ");
    for(i = 0; i < 6; i++){
        if(parity(array[i])){
            printf("%d ", array[i]);
            oddQ++;
        }
    }
    printf("\n\tQuantidade de impares: %d\n\n", oddQ);

    system("pause");
    return 0;

}


int parity(int x){
    if(x % 2) return 1;         //a função retorna 1 se o número for ímpar, ou 0 se for par.
    else return 0;
}