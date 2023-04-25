#include <stdio.h>
#include <stdlib.h>

double Expon(long long x, long long y);   //função de exponenciação inteira.

int main(){

    //var.
    unsigned long long base, expoente;
    printf("\t--CALCULADORA DE POTENCIAS--\n\n");
    printf("Insira uma base e um expoente, nesta ordem.\n>> ");
    scanf("%llu%llu", &base, &expoente);
    printf("Resultado: %lf.\n\n", Expon(base, expoente));
    system("pause");
    return 0;
}


double Expon(long long x, long long y){

    //var. i é um contador. x1 é o valor inicial de x.
    long long i, x1;
    double result;

    x1 = x;
    result = x;

    //checando o tipo do expoente.
    if(y == 0) return 1;
    else if(y > 0){
        for(i = 1; i < y; i++) result *= x1;
    }
    else{
        y *= -1;
        for(i = 1; i < y; i++) result *= x1;
        result = 1.0/result;
    }
    
    return result;
}