#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int oneScanner(char test);          //função que checa se um dado char é 31 ('1');

int main(){

    //var. test armazena o retorno de oneScanner e count conta quantos 1s foram encontrados;
    char num[256];
    int i, test, count = 0;
    printf("Escreva um numero de ate 255 algarismos.\n>> ");
    fflush(stdin);
    gets(num);

    //loop principal;
    for(i = 0; i < 256; i++){
        if(num[i] == '\0') break;
        else{
            test = oneScanner(num[i]);
            if(test) count++;
        }
    }

    if(count = 1) printf("O numero '1' apareceu 1 vez nesse numero!\n\n");
    else printf("O numero '1' apareceu %d vezes nesse numero!\n\n", count);

    system("pause");
    return 0;

}

int oneScanner(char test){          //simplesmente retorna 1 se o char testado for '1', e 0 senão.
    if(test == '1') return 1;
    else return 0;
}