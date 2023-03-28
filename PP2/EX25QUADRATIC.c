#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    
    //variáveis.
    double a, b, c, delta, r1, r2;
    int sw;
    printf("Escreva as variaveis a, b, e c da equacao quadratica:\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    //testando se é equação do segundo grau.
    if(a == 0){
        printf("Nao eh equacao de segundo grau! >:<\n");
        system("pause");
        return 0;
    }

    //cálculos!
    delta = (b * b) - (4 * a * c);
    //gambiarra para garantir que o switch-case funciona~
    sw = delta;
    if(sw < 0){sw = -1;}
    //switch-case para realizar os três casos.
    //...aparentemente C não suporta irracionais?????
    switch(sw){
        case -1:
            printf("Nao existe raiz no dominio dos reais.\n"); break;
        case 0:
            printf("Raiz unica: %lf.\n", -b / (2 * a)); break;
        default:
            r1 = (-b - sqrt(delta) / (2 * a));
            r2 = (-b + sqrt(delta) / (2 * a));
            printf("Raizes: %lf e %lf.\n", r1, r2);
    }
    system("pause");
    return 0;
}