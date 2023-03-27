#include <stdio.h>
#include <stdlib.h>

int main(){

    //variavel
    int x;
    printf("Insira um numero inteiro: ");
    scanf("%d", &x);
    //testando por divisores.
    if(x % 5 == 0 && x % 3 == 0){
        printf("Divisivel por 3 e 5, invalido.\n");
    }
    else if(x % 5 == 0){
        printf("Divisivel por 5.\n");
    }
    else if(x % 3 == 0){
        printf("Divisivel por 3.\n");
    }
    else{
        printf("Indivisivel por 3 ou por 5, invalido.\n");
    }
    system("pause");
    return 0;
}