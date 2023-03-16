#include <stdio.h>
#include <stdlib.h>

int main(){

    //variáveis genéricas
    float x;
    float y;
    printf("Introduza valor em metros quadrados:\n");

    //escaneamento de dados e teste de verdade.
    scanf("%f", &x);
    if(x < 0){
        printf("Medida impossivel.\n");
        system("pause");
        return 0;
    }

    //cálculos.
    y = x * 0.0001;
    printf("Valor em hectares: %f.\n", y);

    system("pause");
    return 0;
}