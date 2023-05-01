#include <stdio.h>
#include <stdlib.h>

int main(){

    //var. larg[3] armazena informações sobre o maior elemento da seguinte forma:
        //o primeiro elemento contém a posição i dele;
        //o segundo elemento contém a posição j dele;
        //o terceiro elemento contém o valor armazeno em mat[i][j];

    int mat[4][4], i, j, larg[3];
    printf("Preencha uma matriz 4x4 com dezesseis elementos inteiros.\n>> ");

    //preenchendo a matriz;
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    
    //alocando valores em larg[];
    larg[0] = 0;
    larg[1] = 0;
    larg[2] = mat[0][0];

    //lendo a matriz e comparando os valores com larg[], atualizando o vetor se necessário;
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(mat[i][j] > larg[2]){
                larg[0] = i;
                larg[1] = j;
                larg[2] = mat[i][j];
            }
        }
    }

    //impressão;
    for(i = 0; i < 4; i++){
        printf("\t");
        for(j = 0; j < 4; j++){
            printf("[%4d] ", mat[i][j]);
        }
        printf("\n");
    }

    printf("\nPosicao do maior elemento: linha %d, coluna %d.\n\n", larg[0]+1, larg[1]+1);
    system("pause");
    return 0;
}