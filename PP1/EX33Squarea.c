#include <stdio.h>
#include <stdlib.h>

int main(){

    //variáveis.
    float l;
    printf("Insira o lado do quadrado em unidades de comprimento:\n");

    //cálculos e resultado.
    scanf("%f", &l);
    if(l < 0){
        printf("Calculo impossivel.\n");
        system("pause");
        return 0;
    }
    printf("Area do quadrado: %f unidades de area.\n", l*l);

    system("pause");
    return 0;
}