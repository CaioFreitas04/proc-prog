#include <stdio.h>
#include <stdlib.h>

int main(){

    //variáveis.
    int i = 0;
    float SUM = 0, TBA;
    printf("Somador de numeros.\n");
    //loop principal.
    while(i < 10){
        printf("Insira um numero: ");
        scanf("%f", &TBA);
        SUM += TBA;
        i++;
    }
    printf("\nSoma: %f", SUM);
    system("pause");
    return 0;
}