#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    //variáveis e escaneamento.
    
    float x;
    printf("Insira um numero: ");
    scanf("%f", &x);

    //testando se o número é positivo ou negativo.
    if(x < 0){
        printf("Numero invalido.\n");
    }
    else{
        printf("Logaritmo: %f.\n", log(x));
    }
    system("pause");
    return 0;
}