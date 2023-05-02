#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int vowelChecker(char sample[]);            //função checadora de vogais: retorna quantas vogais há na palavra;
int vCheck(char c);                         //checa se um CHAR é vogal;
void vowelReplacer(char sample[], char l);  //função substituidora de vogais;

int main(){

    //var.
    char text[256], letra;
    int vogais;

    printf("Insira uma palavra (max 255 caracteres).\n>> ");
    fflush(stdin);
    fgets(text, 256, stdin);
    vogais = vowelChecker(text);

    if(vogais == 1) printf("\nA palavra tem 1 vogal!\n\n");
    else printf("\nA palavra tem %d vogais!\n\n", vogais);

    if(vogais != 0){
        printf("Escreva um caractere para substituir todas as vogais da palavra.\n>> ");
        fflush(stdin);
        scanf("%c", &letra);

        printf("\n");
        vowelReplacer(text, letra);
        printf("\n\n");
    }

    system("pause");
    return 0;
}


int vowelChecker(char sample[]){            //retorna quantas vogais estão presentes na string.
    //var. count conta as vogais;
    int i, count = 0;
    for(i = 0; ; i++){
        if(sample[i] == '\0') break;        //o loop roda até '\0' ser encontrado;
        else{
            if(vCheck(sample[i])){
                count++;
            }
        }
    }
    return count;
}

int vCheck(char c){     //mais bonito do que um if() de três metros no meio da vowelChecker();
    switch(c){          //sem contar que é útil para a vowelReplacer() também;
        case 65:    //A;
        case 69:    //E;
        case 73:    //I;
        case 79:    //O;
        case 85:    //U;
        case 97:    //a;
        case 101:   //e;
        case 105:   //i;
        case 111:   //o;
        case 117: return 1; break;  //u;
        default: return 0;
    }
}

void vowelReplacer(char sample[], char l){
    //var.
    int i;

    for(i = 0; ; i++){
        if(sample[i] == '\0') break;    //o loop roda até '\0' ser encontrado;
        else{
            if(vCheck(sample[i])){
                sample[i] = l;
            }
        }
    }

    //impressão;
    printf("%s", sample);

    return;
}