#include <stdio.h>
#include <stdlib.h>


void valSwap(int *a, int *b);   //troca dois valores: a -> b, b -> a;


int main(){
    int x, y;
    printf("Insira dois valores inteiros.\n>> ");
    scanf("%d%d", &x, &y);
    printf("\n\t%d\t%d\n\n", x, y);
    valSwap(&x, &y);
    printf("\t%d\t%d\n\n", x, y);
    system("pause");
    return 0;
}

void valSwap(int *a, int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}