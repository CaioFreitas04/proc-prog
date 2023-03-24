#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    //variável e escaneamento.
    float x;
    printf("Insira um numero positivo para o calculo de sua raiz quadrada, ou um negativo para o calculo de seu quadrado:\n");
    scanf("%f", &x);

    //algoritmo.
    if(x > 0){
        printf("Raiz quadrada: %f.\n", sqrt(x));
    }
    else{
        printf("Quadrado: %f.\n", x * x);
    }
    system("pause");
    return 0;
}