#include <stdio.h>
#include <stdlib.h>

int main(){

    //variável.
    int COUNT, MULT = 1;

    //testando se é um inteiro positivo.
    do{
        printf("Insira um numero inteiro postivo.\n");
        scanf("%d", &COUNT);
    }while (COUNT < 1);

    //loop principal para mostrar os COUNT primeiros ímpares.
    while(COUNT > 0){
        printf("%d ", (2 * MULT) - 1);
        MULT++;
        COUNT--;
    }
    printf("\n");
    system("pause");
    return 0;
}