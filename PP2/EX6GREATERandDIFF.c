#include <stdio.h>
#include <stdlib.h>

int main(){

    //declarando variáveis e escaneando os valores.
    float x, y;
    printf("Digite dois numeros para comparacao:\n");
    scanf("%f %f", &x, &y);

    //testando qual o maior.
    if(x > y){
        printf("Numero maior: %f\n");
        printf("Diferenca: %f.\n", x - y);
    }
    else if(x < y){
        printf("Numero maior: %f\n", y);
        printf("Diferenca: %f.\n", y - x);
    }
    else{
        printf("Os numeros sao iguais!\n");
        printf("Diferenca: 0.\n");
    }
    system("pause");
    return 0;
}