#include <stdio.h>
#include <stdlib.h>

int main(){

    //variáveis
    int Num, Sum = 0;
    printf("Digite um numero maior do que 0: ");
    scanf("%d", &Num);
    if(Num <= 0){
        printf("Numero invalido.\n");
    }
    else{
        //operação normal.
        while(Num > 0){
            Sum = Sum + (Num % 10);
            Num /= 10;
        }
        printf("Soma dos algarismos do numero inserido: %d.\n", Sum);
    }
    system("pause");
    return 0;
}