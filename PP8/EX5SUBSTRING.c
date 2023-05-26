#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    //var. spX são vários ponteiros usados para escanear as strings. chk servirá para determinar se S2 é substring de S1;
    char S1[256], S2[256], *sp1, *sp2, *sp3;
    int i, chk = 0;
    sp1 = S1;   //armazena a posição de S1 da qual a string está sendo examinada no momento;
    sp3 = S1;   //armazena a posição de S1 que está sendo examinada;
    sp2 = S2;   //armazena as posições de S2 que estão sendo comparadas com *sp3;
    printf("Insira uma string (max 254 caracteres).\n>> ");
    setbuf(stdin, NULL);
    fgets(S1, 256, stdin);
    for(i = 0; *(sp1+i) != '\0'; i++){          //retirando o \n do fgets();
        if(*(sp1+i) == '\n') *(sp1+i) = '\0'; 
    }
    printf("Insira outra string (max 254 caracteres).\n>> ");
    setbuf(stdin, NULL);
    fgets(S2, 256, stdin);
    for(i = 0; *(sp2+i) != '\0'; i++){          //retirando o \n do fgets();
        if(*(sp2+i) == '\n') *(sp2+i) = '\0'; 
    }

    //escaneando a string e determinando se é igual;
    for(i = 0; *(sp1+i) != '\0'; i++){
        while(1){       //esse loop verifica cada caractere de S1, comparando-o ao de S2;
            if(*sp2 == '\0'){
                chk = 1;
                break;  //se ele chega ao final de S2, muda a flag chk para true e sai do loop;
            }
            if(*sp3 != *sp2) break; //se encontra caracteres diferentes em S1 e S2, ele sai do loop;
            sp3++;
            sp2++;
        }
        sp3 = (sp1+i);
        sp2 = S2;
        if(chk == 1) break; //se foi detectada ao mínimo uma substring, então ele não testa mais substrings;
    }

    if(chk == 1) printf("\nSua segunda string eh substring da primeira!\n\n");
    else printf("\nSua segunda string NAO eh substring da primeira!\n\n");
    system("pause");
    return 0;
}