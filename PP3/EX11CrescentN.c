#include <stdio.h>
#include <stdlib.h>

int main(){

    //variável:
    int num, i = 0;
    //GUI para garantir que o valor é inteiro e positivo.
    do{
        printf("Insira um numero natural positivo: ");
        scanf("%d", &num);
        if (num <= 0) printf("Valor invalido.\n\n");
    } while(num <= 0);
    
    //loop principal.
    while(num >= 0){
        printf("%d", i);
        num--;
        if(num < 0) printf(".\n\n");
        else printf(", ");
        i++;
    }
    system("pause");
    return 0;
}