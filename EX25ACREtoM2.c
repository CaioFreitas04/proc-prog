#include <stdio.h>
#include <stdlib.h>

int main(){

    //variáveis genéricas
    float x;
    float y;
    printf("Introduza valor em acres:\n");

    //escaneamento de dados e teste de verdade.
    scanf("%f", &x);
    if(x < 0){
        printf("Medida impossivel.\n");
        system("pause");
        return 0;
    }

    //cálculos.
    y = x * 4048.58;
    printf("Valor em metros quadrados: %f.\n", y);

    system("pause");
    return 0;
}