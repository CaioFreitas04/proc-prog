#include <stdio.h>
#include <stdlib.h>

int main(){

    //variáveis.
    int SUM = 0, TBA, i;
    float AVG;
    printf("Media de dez numeros.\n");
    for(i = 0; i < 10; i++){
        printf("Insira um numero inteiro positivo: ");
        scanf("%d", &TBA);
        //if-else para testar se o valor é positivo ou não.
        if(TBA <= 0) printf("Nao positivo: pulado.\n");
        else SUM += TBA;
    }
    AVG = SUM / 10.0;
    printf("Media: %f.\n", AVG);

    system("pause");
    return 0;
}