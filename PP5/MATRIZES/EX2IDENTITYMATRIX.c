#include <stdio.h>
#include <stdlib.h>

int main(){

    //var.
    int Id[5][5], i, j;

    printf("--Matriz identidade 5x5--\n\n");

    //preenchendo a matriz.
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if(i == j) Id[i][j] = 1;
            else Id[i][j] = 0;
        }
    }

    //imprimindo a matriz.
    for(i = 0; i < 5; i++){
        printf("\t");
        for(j = 0; j < 5; j++){
            printf("%d ", Id[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    system("pause");
    return 0;
}