#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ROTX(char str[], int rot);     //função de código de César arbitrário (por que eu me odeio);
int LetCheck(char l);               //função que checa se um char é uma letra;        

int main(){
    
    //var;
    char tex[256];

    printf("Escreva algo para ser criptografado (max 256 caracteres).\n>> ");
    fflush(stdin);
    fgets(tex, 256, stdin);

    printf("\n");
    ROTX(tex, 3);
    printf("\n\n");

    system("pause");
    return 0;
}


void ROTX(char str[], int rot){ //rot é o número de rotações que o algoritmo fará. Tecnicamente, isso pode realizar qualquer
                                //tipo de rotação, e também descriptografar, fazendo rotações contrárias;
                                //ex: texto em ROT3 pode ser descriptografado com ROT-3;

    //var; test armazena o resultado de LetCheck() para cada posição da string;
    int i, test;

    //loop principal;
    for(i = 0; ; i++){
        if(str[i] == '\0') break;       //o loop se encerra quando encontra o \0;
        else{
            test = LetCheck(str[i]);
            if(test == 1) str[i] += rot;
            else if(test == 2){
                str[i] -= 32;    //ajuste feito para que minúsculas se tornem maiúsculas;
                str[i] += 3;
            }
            if(test && str[i] > 90) str[i] -= 26;   //ajuste feito para que haja "overflow" de Z -> A;
            if(test && str[i] < 65) str[i] += 26;   //ajuste feito para que haja "underflow" de A -> Z;
        }

    
    }

    //impressão;
    printf("%s", str);

}

int LetCheck(char l){                   //retorna 2 se o char for uma letra de a-z, 1 se for de A-Z, e 0 se não for letra;
    if(l >= 65 && l <= 90) return 1;
    if(l >= 97 && l <= 122) return 2;
    else return 0;
}
