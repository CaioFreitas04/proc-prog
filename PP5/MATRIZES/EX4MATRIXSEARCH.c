#include <stdio.h>
#include <stdlib.h>     //código copiado do LAB4_M_EX3LARGESTCOORDS, pois é parecido.

int main(){

    //var. larg[3] armazena informações sobre o elemento desejado da seguinte forma:
        //o primeiro elemento contém a posição i dele, se encontrado;
        //o segundo elemento contém a posição j dele, se encontrado;
        //o terceiro elemento contém o valor desejado;

    int mat[4][4], i, j, larg[3];
    printf("Preencha uma matriz 5x5 com 25 elementos inteiros.\n>> ");

    //preenchendo a matriz;
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            scanf("%d", &mat[i][j]);
        }
    }

    //obtendo o valor desejado;
    printf("\nQual valor deseja encontrar na matriz?\n>> ");
    fflush(stdin);
    scanf("%d", &larg[2]);
    
    //alocando valores em larg[];
    larg[0] = -1;
    larg[1] = -1;

    //lendo a matriz e comparando os valores com larg[], atualizando o vetor se necessário;
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(mat[i][j] == larg[2]){
                larg[0] = i;
                larg[1] = j;
            }

        if(mat[i][j] == larg[2]) break;
        }
    }

    //impressão;
    if(larg[0] >= 0 && larg[1] >= 0){
        printf("\nPosicao do maior elemento: linha %d, coluna %d.\n\n", larg[0]+1, larg[1]+1);
    }
    else printf("Elemento nao encontrado!\n\n");

    system("pause");
    return 0;
}