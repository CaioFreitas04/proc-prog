#include <stdio.h>
#include <stdlib.h>

int main(){

    //var. n é o número de linhas, lin é a linha atual, i é um incrementador, printer é o valor a ser imprimido.
    int n, lin, i;
    long printer = 1;

    do{                                                         //Menu bem simples.
        printf("\t--TRIANGULO DE FLOYD--\n\n");
        printf("Quantas linhas deverao ser imprimidas?\n>> ");
        scanf("%d", &n);
        if(n <= 0) printf("Numero invalido!\n\n");
    }while(n <= 0);
    printf("\n\n");

    //Algoritmo do triângulo de Floyd.
    for(lin = 0; lin < n; lin++){
        for(i = 0; i <= lin; i++){
            printf("%ld ", printer);
            printer++;
        }
        printf("\n");
    }

    printf("\n\n");

    system("pause");
    return 0;
}