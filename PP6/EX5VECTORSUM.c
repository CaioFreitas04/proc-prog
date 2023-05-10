#include <stdio.h>
#include <stdlib.h>


typedef struct vetor{
    float a, b, c;
} vec;


vec vectorSum(vec v1, vec v2);          //função de soma de vetores;


int main(){

    //var. sum armazena a soma dos dois vetores;
    vec v1, v2, sum;
    int i;
    printf("\t--SOMA DE VETORES EM R3--\n\n");
    printf("Insira as coordenadas do primeiro vetor.\n>> ");
    scanf("%f%f%f", &v1.a, &v1.b, &v1.c);
    printf("Insira as coordenadas do segundo vetor.\n>> ");
    scanf("%f%f%f", &v2.a, &v2.b, &v2.c);

    sum = vectorSum(v1, v2);

    printf("\nA soma dos dois vetores eh (%f, %f, %f).\n\n", sum.a, sum.b, sum.c);

    system("pause");
    return 0;
}


vec vectorSum(vec v1, vec v2){  //soma os dois vetores de entrada, e retorna um vetor soma vR;
    //var;
    vec vR;
    vR.a = v1.a + v2.a;
    vR.b = v1.b + v2.b;
    vR.c = v1.c + v2.c;

    return vR;
}