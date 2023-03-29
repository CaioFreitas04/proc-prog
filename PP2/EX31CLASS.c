#include <stdio.h>
#include <stdlib.h>

int main(){

    //variáveis.
    float H, W;
    printf("Insira o seu peso em kg: ");
    scanf("%f", &W);
    printf("Insira a sua altura em m: ");
    scanf("%f", &H);
    printf("Classificacao: ");
    if(W < 0 || H < 0){
        printf("Valor(es) invalido(s)!\n");
        system("pause");
        return 0;
    }
    if(H < 1.20){
        if(W < 60) printf("A.\n");
        if(W <= 90) printf("D.\n");
        if(W > 90) printf("G.\n");
    }
    if(H <= 1.70){
        if(W < 60) printf("B.\n");
        if(W <= 90) printf("E.\n");
        if(W > 90) printf("H.\n");
    }
    if(H > 1.70){
        if(W < 60) printf("C.\n");
        if(W <= 90) printf("F.\n");
        if(W > 90) printf("I.\n");
    }
    system("pause");
    return 0;
}