#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    //variável, introdução do programa, e escaneamento.
    float x;
    printf("Insira um numero:\n");
    scanf("%f", &x);

    //testando o sinal.
    if(x < 0){
        printf("Valor invalido no conjunto dos reais.\n");
    }
    else{
        printf("Raiz quadrada: %f.\n", sqrt(x));
    }
    system("pause");
    return 0;
}