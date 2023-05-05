#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int puncCheck(char c);              //função que testa se um dado caracter é de pontuação ou espaço;
char Cebolilinator(char r);         //O LENDÁLIO E INFALÍVEL CEBOLILINATOR;

int main(){

    //var.
    char texto[256];
    int i, i2, j, j2;

    printf("\t--CEBOLILINATOR--\n\nInsira um texto para ficar acebolado! (max 255 caracteres)\n>> ");
    fflush(stdin);
    fgets(texto, 256, stdin);

    //loop principal;
    for(i = 0; ; i++){
        if(texto[i] == '\0') break;     //o loop se encerra quando chega no \0;
        else{
            i2 = i + 1;
            if((texto[i] == 'r' && texto[i2] == 'r') || (texto[i] == 'R' && texto[i2] == 'R')){    //detecta RR;
                for(j = i; j < 255; j++){
                    j2 = j + 1;
                    texto[j] = texto[j2];
                }
            }
            if(texto[i] == 'r' || texto[i] == 'R'){
                if(!puncCheck(texto[i2])){
                    texto[i] = Cebolilinator(texto[i]);
                }
                else continue;
            }
        } 
    }

    printf("\n%s\n\n", texto);

    system("pause");
    return 0;
}


char Cebolilinator(char r){
    if(r == 'r') return 108;
    else if(r == 'R') return 76;
}


int puncCheck(char c){                  //retorna 1 se o char for um sinal de pontuação ou espaço;
    if(c >= 0 && c <= 47 || c >= 58 && c <= 64) return 1;
    else return 0;
}