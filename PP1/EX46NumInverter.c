#include <stdio.h>
#include <stdlib.h>

int main(){

    //variáveis.
    int Num, Inc = 0;
    printf("Digite um numero natural de tres digitos:\n");
    scanf("%d", &Num);

    //teste de verdade: o número não pode ter mais ou menos do que três dígitos ou ser negativo.
    if(Num < 0){
        printf("Nao eh natural.\n");
    }
    else if(Num < 100 || Num > 999){
        printf("O numero nao tem tres digitos.\n");
    }
    else{
        printf("Invertendo os digitos: ");
        //repetir a ação três vezes: sem quebra de linha, parece uma impressão contínua.
        while(Inc < 3){
            printf("%d", Num % 10);
            Num = Num / 10;
            Inc++;
        }
        printf(".\n");
    }
    system("pause");
    return 0;
}