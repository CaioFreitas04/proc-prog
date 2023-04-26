#include <stdio.h>
#include <stdlib.h>

void SidewaysTriangle(int n);       //função que imprime triângulos de lado!

int main(){

    //var.
    int N;
    printf("\t--TRIANGULOS DE LADO--\n\n");
    printf("Qual deve ser a altura do triangulo?\n>> ");
    scanf("%d", &N);
    printf("\n\n");
    SidewaysTriangle(N);
    printf("\n\n");
    system("pause");
    return 0;

}


void SidewaysTriangle(int n){
    //var.
    long i, j;

    if(n < 1){
        printf("Valor invalido!\n\n");
        return;
    }

    for(i = 0; i < n; i++){
        for(j = 0; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }                                   //Essa sequência específica desenha triângulos como requisitado.
    for(i = (n-2); i >= 0; i--){
        for(j = 0; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
}