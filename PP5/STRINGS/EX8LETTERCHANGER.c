#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int LetterCheck(char input, char comp);   //função que compara duas letras, checando se são iguais;
void LetterReplacer(char str[]);

int main(){

    //var.
    char texto[256];
    printf("Escreva algo (max 256 caracteres).\n>> ");
    fflush(stdin);
    fgets(texto, 256, stdin);

    printf("\n");
    LetterReplacer(texto);
    printf("\n\n");
    
    system("pause");
    return 0;
}


int LetterCheck(char input, char comp){     //simplesmente compara se ambas as letras são iguais e retorna 1 se sim;
    if(input == comp) return 1;
    else return 0;
}


void LetterReplacer(char str[]){
    
    //var. L1 é a letra substituida, L2 é a letra substituta;
    char L1, L2;
    int i;

    printf("Digite uma letra para ser substituida.\n>> ");
    fflush(stdin);
    scanf("%c", &L1);

    printf("Qual letra substituira essa?\n>> ");
    fflush(stdin);
    scanf("%c", &L2);

    for(i = 0; ; i++){
        if(str[i] == '\0') break;   //o loop se encerra quando chega em '\0';
        else{
            if(LetterCheck(str[i], L1)) str[i] = L2;
        }
    }

    //impressão;
    printf("%s", str);

    return;
}