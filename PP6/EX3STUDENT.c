#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct aluno{       //armazena nome, matrícula, e curso;
    char name[256], course[256];
    long id;
} aluno;

int main(){

    //var.
    aluno a[5];
    int i, j;
    printf("\t--BANCO DE DADOS DE ALUNOS--\n\n");
    
    for(i = 0; i < 5; i++){

        printf("Insira o nome do %do aluno (max 255 caracteres).\n>> ", i+1);
        setbuf(stdin, NULL);
        gets(a[i].name);

        printf("\nInsira o numero de matricula do aluno (somente numeros).\n>> ");
        scanf("%ld", &a[i].id);

        printf("\nInsira o curso do aluno (max 255 caracteres).\n>> ");
        setbuf(stdin, NULL);
        gets(a[i].course);

        printf("\n=========\n\n");
    }

    for(i = 0; i < 5; i++){
        printf("\n\t%s\t----\t#%ld\t----\t%s\n", a[i].name, a[i].id, a[i].course);
    }

    printf("\n\n");
    system("pause");
    return 0;
}

