#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void GUI();                                 //função interface;
void modeSelect(char c);                    //função de seleção de modo;
void stringEditor();                        //edita a S1;
void stringSize();                          //checa o tamanho da string;
void stringCompare();                       //compara duas strings;
void stringConcatenator();                  //concatena duas strings;
void backwardsPrint();                      //imprime uma string ao contrário;
void charCount();                           //conta quantas vezes um caractere aparece na string;
void charReplacer();                        //substitui UM char da string;
void substringVer();                        //checa se uma string é substring da string;
void substringMaker();                      //cria uma substring a partir da string;

char S1[21] = "\0";                         //como a S1 é usada por todas as funções, ela é armazenada como
                                            //variável global. Isso vai funcionar, com certeza~;

int main(){

    //var.
    char MODE;

    do{
        GUI();                              //interface bonitinha, que fofa;
        fflush(stdin);
        scanf("%c", &MODE);
        fflush(stdin);
        if(MODE != 's' && MODE != 'S') modeSelect(MODE);

    }while(MODE != 's' && MODE != 'S');

    printf("\n\tEncerrando...\n\n");

    system("pause");
    return 0;

}


void GUI(){

    printf("\t--MANIPULADOR DE STRINGS--\n\n");
    printf("Selecione uma das opcoes abaixo.\n\n");
    printf("\ta) Ler uma string (max 20 caracteres);\n");
    printf("\tb) Imprimir o tamanho de sua string atual;\n");
    printf("\tc) Comparar sua string com outra;\n");
    printf("\td) Concatenar sua string com outra e imprimir;\n");
    printf("\te) Imprimir sua string em reverso;\n");
    printf("\tf) Contar quantas vezes um caractere aparece em sua string;\n");
    printf("\tg) Substituir a primeira instancia de um caractere por outro;\n");
    printf("\th) Verificar se uma string eh substring de sua string;\n");
    printf("\ti) Criar uma substring a partir de sua string;\n");
    printf("\ts) Sair;\n\n");
    printf("Comando?\n>> ");
}

void modeSelect(char c){
    if(c != 'a' && c != 'A' && !strlen(S1)){
        printf("\nArmazene uma string primeiro!\n\n");
        system("pause");
        return;
    }
    else switch(c){
        case 'a':
        case 'A': stringEditor(); break;
        case 'b':
        case 'B': stringSize(); break;
        case 'c':
        case 'C': stringCompare(); break;
        case 'd':
        case 'D': stringConcatenator(); break;
        case 'e':
        case 'E': backwardsPrint(); break;
        case 'f':
        case 'F': charCount(); break;
        case 'g':
        case 'G': charReplacer(); break;
        case 'h':
        case 'H': substringVer(); break;
        case 'i':
        case 'I': substringMaker(); break;
        default: printf("\nComando invalido.\n\n");

        system("pause");
        return;
    }
}


void stringEditor(){
    printf("\nInsira sua string.\n>> ");
    scanf("%s", &S1);
    printf("\nString atualizada!\n\n");
    system("pause");
    return;
}


void stringSize(){

    //var;
    int tamnh;
    tamnh = strlen(S1);
    printf("\nSua string tem %d caracteres!\n\n", tamnh);
    system("pause");
    return;
}


void stringCompare(){

    //var;
    char S2[21];
    printf("\nInsira uma string para ser comparada (max 20 caracteres).\n>> ");
    scanf("%s", &S2);
    if(!strcmp(S1, S2)){
        printf("Essas strings sao iguais!\n\n");
    }
    else printf("Essas strings sao diferentes!\n\n");
    system("pause");
    return;
}


void stringConcatenator(){

    //var;
    char S2[21];
    printf("\nInsira uma string para ser concatenada (max 20 caracteres).\n>> ");
    scanf("%s", &S2);
    printf("\n%s%s\n\n", S1, S2);
    system("pause");
    return;
}


void backwardsPrint(){

    //var;
    int i;
    printf("\n");
    for(i = strlen(S1); i >= 0; i--){
        printf("%c", S1[i]);
    }
    printf("\n\n");
    system("pause");
    return;
}


void charCount(){

    //var. count conta as instâncias de c;
    char c;
    int i, count = 0;
    printf("\nQual caractere voce gostaria de checar?\n>> ");
    scanf("%c", &c);
    for(i = 0; i < strlen(S1); i++){
        if(S1[i] == c){
            count++;
        }
    }

    if(count == 1) printf("O caractere '%c' apareceu 1 vez em sua string!\n\n", c);
    else printf("O caractere '%c' apareceu %d vezes em sua string!\n\n", c, count);
    system("pause");
    return;
}


void charReplacer(){

    //var. check serve para checar se a operação teve sucesso;
    char c1, c2;
    int i, check = 0;
    printf("\nQual caractere gostaria de substituir?\n>> ");
    scanf("%c", &c1);
    printf("Por qual?\n>> ");
    fflush(stdin);
    scanf("%c", &c2);
    for(i = 0; i < strlen(S1); i++){
        if(S1[i] == c1){
            S1[i] = c2;
            break;
        }
        if(i == (strlen(S1) - 1) && S1[i] != c2) check = 1;
    }
    if(check) printf("Esse caractere nao esta em sua string!\n\n");
    else printf("Sucesso!\n%s\n\n", S1);
    system("pause");
    return;
}


void substringVer(){

    //var. check serve para registrar se S2 é substring de S1;
    char S2[21];
    int i, j, check = 0;
    printf("\nInsira a substring a ser testada.\n>> ");
    scanf("%s", &S2);
    if(strlen(S2) > strlen(S1)){
        printf("\nNao eh substring de sua string!\n\n");
    }
    else{
        for(i = 0; i < strlen(S1); i++){    //testa cada letra de S1;
            //if(S1[i] == S2[0]){     //só testa instâncias em que um char de S1 é igual ao primeiro char de S2;
                for(j = 0; j < strlen(S2) + 1; j++){
                    if(S2[j] == '\0'){
                        check = 1;
                        break;
                    }
                    if(S1[i + j] != S2[j]){
                        check = 0;
                        break;
                    }
                }
            //}
            if(check == 1) break;
        }
        if(check == 1) printf("\nEh substring de sua string!\n\n");
        else printf("\nNao eh substring de sua string!\n\n");
    }

    system("pause");
    return;
}


void substringMaker(){

    //var. posi e posf são as posições inicial e final, respectivamente;
    int i, posi, posf;

    printf("\nEm qual posicao sera iniciada a leitura de substring?\n>> ");
    scanf("%d", &posi);
    printf("Em qual posicao sera terminada?\n>> ");
    scanf("%d", &posf);

    if(posf <= posi || posf > 20 || posf > strlen(S1) || posi < 0){
        printf("\nValor(es) invalido(s)!\n\n");
        system("pause");
        return;
    }

    printf("\n");
    for(i = posi; i <= posf; i++){
        printf("%c", S1[i]);
    }
    printf("\n\n");
    system("pause");
    return;
}