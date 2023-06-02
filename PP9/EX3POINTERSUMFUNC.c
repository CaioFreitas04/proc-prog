#include <stdio.h>
#include <stdlib.h>


void SumFunc(int *a, int *b);       //soma a e b, armazenando o resultado em a;


int main(){
    int x, y;
    printf("Insira dois numeros inteiros.\n> ");
    scanf("%d%d", &x, &y);
    SumFunc(&x, &y);
    printf("\n\n\tSoma: %d\n\n", x);
    system("pause");
    return 0;
}


void SumFunc(int *a, int *b){
    *a += *b;
}