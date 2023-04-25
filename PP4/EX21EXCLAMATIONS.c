#include <stdio.h>
#include <stdlib.h>

void Exclangle(int L);          //função que desenha um triângulo de exclamações.

int main(){

    //var.
    int linhas;
    printf("\t--TRIANGULO--\n\n");
    printf("Quantas linhas deve ter o triangulo?\n>> ");
    scanf("%d", &linhas);
    printf("\n");
    Exclangle(linhas);
    printf("\n\n");
    system("pause");
    return 0;
}


void Exclangle(int L){
    //var. Dois contadores para as linhas do triângulo.
    long i, j;
    if(L < 0){
        printf("ERR: Valor invalido.\n\n");
        return;
    }
    else{
        for(i = 0; i < L; i++){
            for(j = 0; j <= i; j++){
                printf("!");
            }
            printf("\n");
        }
    }
}