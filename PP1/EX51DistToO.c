#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    //variáveis.
    float x, y, mod;
    printf("Digite as coordenadas do ponto:\n");
    scanf("%f %f", &x, &y);

    //cálculos: literalmente só um Pitágoras.
    mod = sqrt(x * x + y * y);
    printf("Distancia do ponto ate a origem: %f.\n", mod);

    system("pause");
    return 0;
}