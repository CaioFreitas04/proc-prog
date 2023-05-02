#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void wordReverser(char sent[], int leng);          //inversor de strings;

int main(){

    //var. comp armazena o comprimento da string;
    char texto[256];
    int comp;
    printf("Escreva algo (max 255 caracteres).\n>> ");
    fflush(stdin);
    fgets(texto, 256, stdin);
    comp = strlen(texto);
    comp -= 2;                              //foi necessário fazer esse ajuste para o código funcionar corretamente
                                            //dessa forma, ele ignora o \n(?) e ajusta a posição para processamento
                                            //pela wordReverser();
    printf("\n");
    wordReverser(texto, comp);
    printf("\n\n");

    system("pause");
    return 0;

}


void wordReverser(char sent[], int leng){

    //var;
    int i;

    //loop principal;
    for(i = leng; i >= 0; i--){
        printf("%c", sent[i]);
    }
}