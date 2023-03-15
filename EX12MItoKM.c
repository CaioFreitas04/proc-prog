#include <stdio.h>
#include <stdlib.h>

int main(){

    //introduzir o programa e declarar variáveis.
    float km;
    float mi;
    printf("Insira valor em milhas para converter em quilometros:\n");

    //coletar dados para cálculo e realizar teste de verdade.
    scanf("%f", &mi);
    if(mi < 0){

        printf("Comprimento impossivel.\n");
        system("pause");
        return 0;

    }

    //cálculos
    km = mi *1.61;
    printf("Distancia em quilometros: %f.\n", km);

    system("pause");
    return 0;
}