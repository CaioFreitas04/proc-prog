#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    //var.
    double num;
    printf("--CALCULADORA DE POTENCIAS E RAIZES--\n\n");
    //o programa inteiro se encontrará nesse loop.
    do{
        printf("Insira um numero positivo para calcular seu quadrado, seu cubo, e sua raiz (negativo ou zero encerra programa): ");
        scanf("%lf", &num);
        if(num <= 0) break;
        printf("\nQuadrado: %lf.\n", num * num);
        printf("Cubo: %lf.\n", num * num * num);
        printf("Raiz: %lf.\n", sqrt(num));
    }while(num > 0);

    printf("\nEncerrando programa...\n");
    system("pause");
    return 0;
}