#include <stdio.h>
#include <stdlib.h>

void desenha_linha(int x);                           //função de desenhar linhas (*gasp!*)

int main(){
    
    //var: L = comprimento de linha.
    int L;
    printf("\t--DESENHADOR DE LINHAS--\n\n");
    printf("Insira o comprimento da linha a ser desenhada.\n>> ");
    scanf("%d", &L);
    printf("\n");
    desenha_linha(L);
    printf("\n\n");
    system("pause");
    return 0;
}


void desenha_linha(int x){

    //var.
    int i;
    if(x <= 0){
        printf("Comprimento invalido.");
        return;
    }
    else{
        for(i = 0; i < x; i++) printf("=");
    }
}