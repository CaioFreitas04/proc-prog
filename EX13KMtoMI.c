#include <stdio.h>
#include <stdlib.h>

int main(){

    //introduzir o programa e declarar variáveis.
    float km;
    float mi;
    printf("Insira valor em quilometros para converter em milhas:\n");

    //coletar dados para cálculo e realizar teste de verdade.
    scanf("%f", &km);
    if(km < 0){

        printf("Comprimento impossivel.\n");
        system("pause");
        return 0;

    }

    //cálculos
    mi = km / 1.61;
    printf("Distancia em quilometros: %f.\n", mi);

    system("pause");
    return 0;
}