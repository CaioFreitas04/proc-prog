#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int d20();              //função que gera valores de 1 a 20 (requer time.h);
void printMat(int tri[4][4]); //função impressora de matrizes 4x4

int main(){

    //var;
    int tri[4][4], i, j;

    //inicializando seed.
    srand(time(NULL));

    printf("Gerando matriz original:");

    //preenchendo a matriz original, e imprimindo-a;
    
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            tri[i][j] = d20();
        }
    }
    printf("\n\n");

    printMat(tri);
    printf("\n\n");

    system("pause");

    //convertendo em matriz triangular e imprimindo.

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(j > i) tri[i][j] = 0;
        }
    }
    printf("Matriz triangular:\n\n");
    
    printMat(tri);
    printf("\n\n");

    system("pause");
    return 0;
}


int d20(){              //quando a função é chamada, ela retorna um número de 1 a 20;
    int d;
    d = rand() % 20;
    d++;
    return d;
}

void printMat(int tri[4][4]){

    //var.
    int i, j;

    for(i = 0; i < 4; i++){
        printf("\t");
        for(j = 0; j < 4; j++){
            printf("%3d", tri[i][j]);
        }
        printf("\n");
    }

}