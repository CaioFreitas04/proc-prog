#include <stdio.h>
#include <stdlib.h>

int main(){
    
    //var;
    int matgr[10][10], i, j;

    //preenchendo a matriz (socorro);
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            if(i < j){
                matgr[i][j] = (2 * i) + (7 * j);
            }
            else if(i == j){
                matgr[i][j] = (3 * i * i) - 1;
            }
            else{
                matgr[i][j] = (4 * i * i * i) - (5 * j * j) + 1;
            }
        }
    }

    //imprimindo a matriz;
    for(i = 0; i < 10; i++){
        printf("\t");
        for(j = 0; j < 10; j++){
            printf("[%7d] ", matgr[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");
    system("pause");
    return 0;

}