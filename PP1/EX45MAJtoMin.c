#include <stdio.h>
#include <stdlib.h>

int main(){

    //variáveis e tals.
    char LETT;
    printf("Digite uma letra maiuscula:\n");
    scanf("%c", &LETT);

    //teste de realidade para conferir se o caracter inserido realmente é uma letra maiúscula.
    if(LETT > 90 || LETT < 41){
        printf("Isso nao eh uma letra maiuscula! >:(\n");
    }
    else{
        //sabendo que é uma letra, continuar.
        LETT += 32;
        printf("em minusculo: %c.\n", LETT);
    }

    system("pause");
    return 0;
}