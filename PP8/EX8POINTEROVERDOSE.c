#include <stdio.h>
#include <stdlib.h>

int main(){
    //var;
    int a, *b, **c, ***d;
    b = &a;
    c = &b;
    d = &c;
    printf("Insira um inteiro.\n>> ");
    scanf("%d", b);
    printf("Dobro: %d.\nTriplo: %d.\nQuadruplo: %d.\n\n", (*b)*2, (**c)*3, (***d)*4);
    system("pause");
    return 0;
}