#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int VowelCheck(char c);                     //detecta se um dado caractere é uma vogal;
int VowelRemover(char *str);                //remove todas as vogais de uma string;
int LetterRemover(char *str, int pos);      //remove o caractere na posição str[pos] da string;


int main(){
    
    //var;
    char *str;
    int N, i;

    //lendo comprimento da string.
    printf("Quantos caracteres tem sua string?\n");
    do{
        printf(">> ");
        setbuf(stdin, NULL);
        scanf("%d", &N);
        if(N <= 0) printf("Valor invalido.\n\n");
    }while(N <= 0);
    printf("\n\n");

    //alocando memória;
    str = (char*) calloc(N, sizeof(char));

    printf("Escreva sua string.\n>> ");
    setbuf(stdin, NULL);
    fgets(str, N, stdin);
    //retirando \n da string;
    for(i = 0; str[i] != '\0'; i++){
        if(str[i] == '\n') str[i] = 0;
    }

    if(VowelRemover(str)) printf("\n\nERR!\n\n");
    else printf("\n\n%s\n\n", str);


    system("pause");
    return 0;
}


int VowelCheck(char c){

    //if() nojentamente grande: a função retorna 1 se detectar vogal, ou 0 se não;
    if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return 1;
    else return 0;
}

int VowelRemover(char *str){

    //var;
    int i;
    for(i = 0; str[i] != '\0'; i++){
        if(VowelCheck(str[i])){
            do{
                if(LetterRemover(str, i)) return 1;
            }while(VowelCheck(str[i]));
        }
    }
    return 0;
}

int LetterRemover(char *str, int pos){

    //var;
    int i;

    if(pos < 0) return 1;

    for(i = pos; str[i] != '\0'; i++){
        str[i] = str[i+1];
    }
}