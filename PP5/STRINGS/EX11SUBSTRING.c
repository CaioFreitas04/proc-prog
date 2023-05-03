#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void substringPrinter(char str[]);      //função impressora de substrings;

int main(){

    //var.
    char S[256];

    printf("Escreva algo (max 256 caracteres).\n>> ");
    fflush(stdin);
    fgets(S, 256, stdin);

    printf("\n");
    substringPrinter(S);
    printf("\n\n");

    system("pause");
    return 0;
}


void substringPrinter(char str[]){

    //var;
    unsigned int i, j;

    do{
        printf("De qual caracter voce quer comecar a imprimir sua nova string?\n>> ");
        scanf("%u", &i);
        printf("Quando voce quer terminar?\n>> ");
        scanf("%u", &j);
        if(i >= j){
            printf("\nInvalido! O primeiro numero deve ser maior do que o segundo!\n\n");
        }
    }while(i >= j);

    printf("\n\t");
    for(i; i <= j; i++){
        printf("%c", str[i]);
    }
}