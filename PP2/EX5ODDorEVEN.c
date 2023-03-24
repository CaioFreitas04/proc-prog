#include <stdio.h>
#include <stdlib.h>

int main(){

    //variável e escaneamento.
    int x;
    printf("Digite um numero inteiro:\n");
    scanf("%d", &x);

    //algoritmo:
    if(x % 2 == 1){
        printf("Impar!\n");
    }
    else{
        printf("Par!\n");
    }
    system("pause");
    return 0;
}