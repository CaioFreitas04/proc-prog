#include <stdio.h>
#include <stdlib.h>

int main(){

    //declarando variáveis e tal.
    float x, y, z, xyz;
    printf("Insira 3 valores para o calculo da soma de seus quadrados:\n");

    //escaneando valores e realizando cálculos.
    scanf("%f %f %f", &x, &y, &z);
    x = x * x;
    y = y * y;
    z = z * z;
    xyz = x + y + z;

    //apresentação do resultado.
    printf("Resultado final: %f.\n", xyz);

    system("pause");
    return 0;
}