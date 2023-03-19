#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    //Variáveis e teste de realidade.
    float c1, c2, h;
    printf("Insira os comprimentos dos catetos em unidades de comprimento:\n");
    scanf("%f %f", &c1, &c2);
    if(c1 < 0 || c2 < 0){
        printf("Calculo impossivel.\n");
        system("pause");
        return 0;
    }

    //verificada a possibilidade do cálculo, este é realizado.
    h = sqrt(c1 * c1 + c2 * c2);
    printf("Hipotenusa do triangulo: %f u.c..\n", h);

    system("pause");
    return 0;
}