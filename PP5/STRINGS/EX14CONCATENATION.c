#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void stringConcatenator(char str1[], char str2[], int chars);

int main(){

    //var.
    char str1[256], str2[256];
    int qtd, i;

    printf("\t--CONCATENADOR DE STRINGS--\n\n");
    printf("Escreva duas sentencas (max 256 cada).\n>> ");

    fflush(stdin);
    fgets(str1, 256, stdin);
    printf(">> ");
    fflush(stdin);
    fgets(str2, 256, stdin);

    for(i = 0; i < strlen(str1); i++){      //removendo o '\n' da string para melhor concatenação;
        if(str1[i] == '\n'){
            for(i = i; i < 256; i++){
                str1[i] = str1[i + 1]; 
            }
        }
    }

    printf("\nQuantos caracteres da segunda sentenca devem ser concatenados na primeira?\n>> ");
    scanf("%d", &qtd);

    printf("\n");
    stringConcatenator(str1, str2, qtd);
    printf("\n\n");

    system("pause");
    return 0;
}


void stringConcatenator(char str1[], char str2[], int chars){   //concatena a segunda string na primeira, até chars;

    str2[chars] = '\0'; //inserindo um \0 no espaço correto para que a string seja concatenada devidamente;
    strcat(str1, str2);

    printf("%s", str1);

}