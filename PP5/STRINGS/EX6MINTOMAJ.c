#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void majMinSwitch(char text[], int opcode);     //função que converte de maiúsculas para minúsculas ou vice versa
                                                //dependendo do opcode fornecido;
int main(){

    //var.
    char str[256];

    printf("Escreva algo (max 255 caracteres).\n>> ");
    fgets(str, 256, stdin);
    printf("\n");
    majMinSwitch(str, 0);   //o opcode 0 é a única diferença entre este exercício e o anterior: LAB5_S_EX5MAJTOMIN;
    printf("\n\n");         //a função majMinSwitch pode realizar ambas as tarefas!;

    system("pause");
    return 0;
}


void majMinSwitch(char text[], int opcode){
    //var.
    int i;

    //loops principais: variam dependendo do opcode: se true, converte de maiúsculas para minúsculas, senão,
    //realiza a operação contrária;
    //ambos os loops são executados até que um '\0' seja encontrado;

    if(opcode){
        for(i = 0; ; i++){
            if(text[i] == '\0') break;
            else{
                if(text[i] >= 65 && text[i] <= 90) text[i] += 32;
            }
        }
    }
    else{
        for(i = 0; ; i++){
            if(text[i] == '\0') break;
            else{
                if(text[i] >= 97 && text[i] <= 122) text[i] -= 32;
            }
        }
    }

    //impressão;
    printf("%s", text);
}