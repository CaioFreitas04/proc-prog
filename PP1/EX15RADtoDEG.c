#include <stdio.h>
#include <stdlib.h>

#define pi 3.141592
//definindo pi como constante para uso no programa.

int main(){

    //variáveis e introdução do programa.
    float deg;
    float deg1;
    float rad;
    float rad1;
    printf("Insira angulo em radianos para conversao em graus:\n");

    //teste de realidade.
    scanf("%f", &rad);
    if(0 > rad){
        printf("Angulo inexistente.\n");
        system("pause");
        return 0;
    }

    rad1 = rad;

    //reduzindo o arco até o seu valor mínimo.
    while(rad > 6.283184){
        rad = rad - 3.141592;
    }

    //cálculos e apresentação do resultado.
    deg1 = (rad1 * 180) / pi;
    deg = (rad * 180) / pi;

    if(rad1 > 6.283184){
        printf("Angulo resultante: %f deg (%f deg).\n", deg1, deg);
        system("pause");
        return 0;
    }
    
    printf("Angulo resultante: %f deg.\n", deg1);
    system("pause");
    return 0;
}