#include <stdio.h>
#include <stdlib.h>

int main(){

    //var: nX <- Nota de X reais. VAL <- valor a ser sacado.
    int n1 = 0, n2 = 0, n5 = 0, n10 = 0, n20 = 0, n50 = 0, n100 = 0, VAL;
    printf("\t--MAQUINA BANCARIA--\n\n");
    //GUI.
    do{
        printf("Qual o valor a ser sacado? (inteiro)\n>> ");
        scanf("%d", &VAL);
        if(VAL <= 0) printf("ERR VALOR_INVALIDO\n\n");
    }while(VAL <= 0);
    printf("\n\n");

    //Essa aberração aqui calcula quantas notas de cada tipo serão necessárias para montar qualquer valor.
    while(VAL >= 100){
        VAL -= 100;
        n100++;
    }
    while(VAL >= 50){
        VAL -= 50;
        n50++;
    }
    while(VAL >= 20){
        VAL -= 20;
        n20++;
    }
    while(VAL >= 10){
        VAL -= 10;
        n10++;
    }
    while(VAL >= 5){
        VAL -= 5;
        n5++;
    }
    while(VAL >= 2){
        VAL -= 2;
        n2++;
    }
    while(VAL >= 1){
        VAL -= 1;
        n1++;
    }
    printf("SAQUE: ");
    
    //e essa outra aberração imprime quantas notas de cada tipo serão necessárias!
    if(n100 > 0) printf("%d nota(s) de R$100.00, ", n100);
    if(n50 > 0) printf("%d nota(s) de R$50.00, ", n50);
    if(n20 > 0) printf("%d nota(s) de R$20.00, ", n20);
    if(n10 > 0) printf("%d nota(s) de R$10.00, ", n10);
    if(n5 > 0) printf("%d nota(s) de R$5.00, ", n5);
    if(n2 > 0) printf("%d nota(s) de R$2.00, ", n2);
    if(n1 > 0) printf("%d nota(s) de R$1.00, ", n1);
    printf("sendo emitida(s)!\n\n");
    system("pause");
    return 0;
}