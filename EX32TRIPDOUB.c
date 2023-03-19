#include <stdio.h>
#include <stdlib.h>

int main(){

    //variáveis.
    int x;
    printf("Digite um valor inteiro:\n");
    scanf("%d", &x);

    //calculos
    x = x * 5;
    printf("A soma do sucessor do triplo com o antecessor do dobro desse valor resulta em %d.\n", x);

    system("pause");
    return 0;
}