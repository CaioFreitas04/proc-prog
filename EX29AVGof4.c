#include <stdio.h>
#include <stdlib.h>

int main(){

    //declarando variáveis: quatro notas e um total.
    float n1, n2, n3, n4, ntot;
    printf("Insira suas quatro notas para o calculo da media aritmetica:\n");

    //escaneamento e cálculos.
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    ntot = n1 + n2 + n3 + n4;
    ntot = ntot / 4;

    //apresentação
    printf("Media das notas: %f.\n", ntot);

    system("pause");
    return 0;
}