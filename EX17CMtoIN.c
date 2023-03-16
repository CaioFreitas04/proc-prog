#include <stdio.h>
#include <stdlib.h>

int main(){

    //variáveis genéricas
    float x;
    float y;
    printf("Introduza valor em centimetros:\n");

    //escaneamento de dados e teste de verdade.
    scanf("%f", &x);
    if(x < 0){
        printf("Medida impossivel.\n");
        system("pause");
        return 0;
    }

    //cálculos.
    y = x / 2.54;
    printf("Valor em polegadas: %f.\n", y);

    system("pause");
    return 0;
}