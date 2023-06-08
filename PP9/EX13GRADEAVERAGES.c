#include <stdio.h>
#include <stdlib.h>


int GradeFunc(float *G1, float *G2, float *Avg, float *WAvg);   //Nota 1, Nota 2, Média, Média Ponderada;


int main(){
    
    //var;
    float nota1, nota2, media, mediap;
    printf("\tCalculadora de notas\n\nInsira duas notas.\n>> ");
    scanf("%f%f", &nota1, &nota2);

    if(GradeFunc(&nota1, &nota2, &media, &mediap) == 1){
        printf("ERR: valores invalidos!\n\n");
        return 0;
    }
    else{
        printf("\nNota 1: %.2f\nNota 2: %.2f\nMedia aritmetica: %.2f\nMedia ponderada: %.2f\n\n", nota1, nota2, media, mediap);
    }
    system("pause");
    return 0;
}


int GradeFunc(float *G1, float *G2, float *Avg, float *WAvg){

    if(*G1 < 0 || G2 < 0){
        return 1;
    }

    *Avg = (*G1 + *G2) / 2;
    *WAvg = (*G1 + (2* *G2)) / 3;

    return 0;
}