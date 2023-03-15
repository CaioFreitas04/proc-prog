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
    printf("Insira angulo em graus para conversao em radianos:\n");

    //teste de realidade.
    scanf("%f", &deg);
    if(0 > deg){
        printf("Angulo inexistente.\n");
        system("pause");
        return 0;
    }

    deg1 = deg;

    //reduzindo o arco até o seu valor mínimo.
    while(deg > 360){
        deg = deg - 360;
    }

    //cálculos e apresentação do resultado.
    rad1 = (deg1 * pi) / 180;
    rad = (deg * pi) / 180;

    if(deg1 > 360){
        printf("Angulo resultante: %f rad (%f rad).\n", rad1, rad);
        system("pause");
        return 0;
    }
    
    printf("Angulo resultante: %f rad.\n", rad1);
    system("pause");
    return 0;
}