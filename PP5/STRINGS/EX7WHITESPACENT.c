#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int WSDetector(char c);         //detector de espaços em branco;
void WSRemover(char str[]);     //removedor de espaços em branco;

int main(){

    //var;
    char texto[256];
    printf("Escreva algo com alguns espacos (max 255 caracteres).\n>> ");
    fflush(stdin);
    fgets(texto, 256, stdin);

    printf("\n");
    WSRemover(texto);
    printf("\n\n");

    system("pause");
    return 0;
}


int WSDetector(char c){     //simplesmente retorna 1 se o caracter for alguma forma de whitespace;
    switch(c){
        case ' ':
        case '\t':
        case '\r':
        case '\n':
        case '\v':
        case '\f': return 1; break;
        default: return 0;
    }
}


void WSRemover(char str[]){

    //var.
    int i;
    
    //loop principal;
    for(i = 0; ; i++){
        if(str[i] == '\0') break;   //o loop so para quando alcançar o '\0';
        else{
            if(WSDetector(str[i])) continue;
            else printf("%c", str[i]);  //impressão dos caracteres não brancos;
        }
    }

    return;
}