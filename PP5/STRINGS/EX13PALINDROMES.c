#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int puncCheck(char c);      //função que testa se um dado caracter é de pontuação ou espaço;
int LetCheck(char l);       //função que checa se um char é uma letra, roubada do LAB5_S_EX12ROT3;

int main(){

    //var.
    char text[100], palin[100];
    int comprimento, i, j;

    printf("Escreva algo (max 99 caracteres).\n>> ");
    fflush(stdin);
    fgets(text, 100, stdin);

    //primeiro, deve-se "normalizar" a string: remover espaços, pontuação, e diferença de capitalização;
    for(i = 0; i < 100; i++){
        if(text[i] == '\0') break;  //o loop encerra quando o \0 for encontrado;
        else{
            if(puncCheck(text[i])){             //pega TUDO depois do ponto e taca pra trás, provavelmente horrível;
                do{                             //ação repetida para proteger contra casos como ", ";
                    for(j = i; j < 100; j++){
                        text[j] = text[j + 1];
                    }
                }while(puncCheck(text[i]));
            }
            if(LetCheck(text[i]) == 2){
                text[i] -= 32;
            }
        }
    }

    //invertendo a string e comparando as duas;
    comprimento = strlen(text);
    comprimento -= 2;

    j = 0;
    for(i = comprimento; i >= 0; i--){
        palin[j] = text[i];
        j++;
    }

    for(i = 0; i < comprimento; i++){
        if(text[i] == '\0') break;
        if(text[i] == palin[i]) continue;
        else{
            comprimento = -1;      //variável de comprimento reciclada para averiguar que o palíndromo é verdadeiro;
            break;
        }
    }

    if(comprimento == -1) printf("\nNao eh um palindromo!\n\n");
    else printf("\nEh um palindromo!\n\n");

    system("pause");
    return 0;
}


int puncCheck(char c){                  //retorna 1 se o char for um sinal de pontuação ou espaço;
    if(c >= 32 && c <= 47 || c >= 58 && c <= 64) return 1;
    else return 0;
}


int LetCheck(char l){                   //retorna 2 se o char for uma letra de a-z, 1 se for de A-Z, e 0 se não for letra;
    if(l >= 65 && l <= 90) return 1;
    if(l >= 97 && l <= 122) return 2;
    else return 0;
}