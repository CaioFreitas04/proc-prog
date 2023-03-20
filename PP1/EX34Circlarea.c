#include <stdio.h>
#include <stdlib.h>

#define pi 3.141592

int main(){

    //variáveis e escaneamento.
    float r;
    printf("Insira raio do circulo em unidades de comprimento:\n");
    scanf("%f", &r);

if(r < 0){
        printf("Calculo impossivel.\n");
        system("pause");
        return 0;
    }

    //cálculo e resultados
    r = r * r * pi;
    printf("Area do circulo: %f unidades de area.\n", r);

    system("pause");
    return 0;
}