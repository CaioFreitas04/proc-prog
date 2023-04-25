#include <stdio.h>
#include <stdlib.h>

int digsum(int num);                    //função de soma de algarismos de números.

int main(){

    //var.
    int input;
    printf("Soma de algarismos: insira um numero inteiro positivo.\n>> ");
    scanf("%d", &input);
    input = digsum(input);
    if(input) printf("\nA soma dos algarismos desse numero eh %d.\n\n", input);
    else printf("\nNumero invalido.\n\n");

    system("pause");
    return 0;
}



int digsum(int num){
    if(num <= 0) return 0;
    int sum = 0;                    //simples algoritmo de separação e soma de dígitos.
    do{
        sum += (num % 10);
        num /= 10;
    }while(num > 0);
    return sum;
}