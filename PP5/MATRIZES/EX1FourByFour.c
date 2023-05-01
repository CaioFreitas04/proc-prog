#include <stdio.h>
#include <stdlib.h>

int main(){
    //var. count é o número de valores maiores do que 10.
    int mat[4][4], i, j, count = 0;

    printf("\t--MATRIZ 4X4--\n\n");
    printf("Escreva dezesseis valores inteiros, para preencher uma matriz 4x4.\n>> ");
    
    //loop principal.
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            scanf("%d", &mat[i][j]);
            if(mat[i][j] > 10) count++;
        }
    }

    if(count == 0) printf("Nao ha elementos maiores do que 10 nessa matriz!\n");
    else if(count == 1) printf("Ha 1 elemento maior que 10 nessa matriz!\n");
    else printf("Ha %d elementos maiores do que 10 nessa matriz!\n", count);

    system("pause");
    return 0;

}