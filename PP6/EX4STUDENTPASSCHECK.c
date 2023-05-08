#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct aluno{   //armazena número de matrícula, nome do aluno, e as notas de cada prova;
    char nome[256], mat[256];
    float nota[3];
} aluno;


float arrAvg(float arr[], int l);   //calcula a média aritmética de todos os termos do vetor, até l;


int main(){

    //var. grAvg e smAvg são a maior e menor média, respectivamente, e lStu e hStu armazenam o aluno com a menor e maior média, respectivamente;
    int i, lStu, hStu;
    aluno a[5];
    float grAvg = 0, smAvg = 0;

    printf("\t--CALCULADORA DE NOTAS--\n\n");

    for(i = 0; i < 5; i++){
        printf("Insira o nome do %do aluno (max 255 caracteres).\n>> ", i+1);
        setbuf(stdin, NULL);
        gets(a[i].nome);

        printf("\nInsira o numero de matricula do aluno (max 255 caracteres).\n>> ");
        setbuf(stdin, NULL);
        gets(a[i].mat);

        printf("\nInsira as notas das tres provas do aluno (0 - 10).\n>> ");
        scanf("%f%f%f", &a[i].nota[0], &a[i].nota[1], &a[i].nota[2]);

        printf("\n=========\n\n");
    }

    //calculando médias;
    for(i = 0; i < 5; i++){
        //nota[0] de cada aluno será usado para armazenar a média, e nota[1] para armazenar se o aluno passou ou não;
        //se nota[1] < 0, o aluno foi reprovado. Senão, foi aprovado;
        a[i].nota[0] = arrAvg(a[i].nota, 3);
        if(a[i].nota[0] > grAvg){
            grAvg = a[i].nota[0];
            hStu = i;
        }
        else if(a[i].nota[0] < smAvg){
            smAvg = a[i].nota[0];
            lStu = i;
        }
        if(a[i].nota[0] < 6.0) a[i].nota[1] = -1;
    }

    for(i = 0; i < 5; i++){
        printf("\n\tMatricula: %s\t-\tNome: %s\t-\tMedia: %.2f\t-\tAprovado? ", a[i].mat, a[i].nome, a[i].nota[0]);
        if(a[i].nota[1] < 0) printf("NAO\n");
        else printf("SIM\n");
    }
    printf("\nMaior media: %s (%.2f)!\n", a[hStu].nome, a[hStu].nota[0]);
    printf("\nMenor media: %s (%.2f)...\n\n", a[lStu].nome, a[lStu].nota[0]);

    system("pause");
    return 0;
}


float arrAvg(float arr[], int l){
    
    //var.
    int i;
    float soma = 0;
    for(i = 0; i < l; i++){
        soma += arr[i];
    }

    return soma / l;
}