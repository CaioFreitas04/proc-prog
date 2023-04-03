#include <stdio.h>
#include <stdlib.h>

int main(){

    //variável.
    int i = 0, SUM = 0;
    printf("Soma dos 50 primeiros numeros pares:\n\n");
    do{
        printf("%d ", 2 * i);
        if(i < 49) printf("+ ");
        i++;
        SUM += i;
    }while(i < 50);
    printf("= %d\n", SUM);


    system("pause");
    return 0;
}