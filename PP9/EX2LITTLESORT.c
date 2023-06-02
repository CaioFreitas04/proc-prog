#include <stdio.h>
#include <stdlib.h>


void twoIntSort(int *a, int *b);    //se a > b, retorna a, b, senão, retorna b, a;


int main(){
    int x, y;
    printf("Insira dois valores inteiros (x e y), para serem ordenados.\n>> ");
    scanf("%d%d", &x, &y);
    twoIntSort(&x, &y);
    printf("\n\n\tx = %d > y = %d\n\n", x, y);
    system("pause");
    return 0;
}

void twoIntSort(int *a, int *b){
    int aux;
    if(*b > *a){
        aux = *a;
        *a = *b;
        *b = aux;
    }
    else return;
}