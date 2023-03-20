#include <stdio.h>
#include <stdlib.h>

int main(){

    //variável.
    int x;
    printf("Digite um valor inteiro:\n");
    scanf("%d", &x);

    //apresentação dos resultados.
    printf("Antecessor do numero: %d.\nSucessor do numero: %d.\n", x-1, x+1);

    system("pause");
    return 0;
}