#include <stdio.h>
#include <stdlib.h>

int main(){

    //variável e escaneamento.
    int yr;
    printf("Insira o ano: ");
    scanf("%d", &yr);
    
    //cálculos de bissexitude(???) de ano.
    if(yr % 400 == 0 || (yr % 4 == 0 && yr % 100 != 0)){
        printf("Ano bissexto!\n");
    }
    else{
        printf("Ano comum!\n");
    }
    system("pause");
    return 0;
}