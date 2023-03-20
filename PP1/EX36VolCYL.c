#include <stdio.h>
#include <stdlib.h>

#define pi 3.141592

int main(){

    //variáveis e escaneamento.
    float r, h;
    printf("Insira raio e altura do cilindro circular em unidades de comprimento:\n");
    scanf("%f %f", &r, &h);

    if(r < 0 || h < 0){
        printf("Calculo impossivel.\n");
        system("pause");
        return 0;
    }

    //cálculo e resultados
    r = r * r * pi * h;
    printf("Volume do cilindro: %f unidades de volume.\n", r);

    system("pause");
    return 0;
}