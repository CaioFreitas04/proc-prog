#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct aluno{               //a struct aln armazena um código de disciplina, um nome, um número de matrícula, e duas notas;
    int cod;
    char nom[256], mat[25];
    float n1, n2;
} aln;


int main(){

    //var. qtd armazena a quantidade de alunos registradas no programa;
    aln alunos[10];
    int i, j, qtd;
    printf("\t--BANCO DE DADOS DE ALUNOS--\n\n");
    printf("Quantos alunos voce armazenara (min 1, max 10)?\n");
    do{
        printf(">> ");
        scanf("%d", &qtd);
    }while(qtd < 0 || qtd > 10);

    printf("\n=========\n\n");

    for(i = 0; i < qtd; i++){

        printf("Insira o codigo de matricula do %do aluno (max 24 caracteres).\n>> ", i + 1);    //matrícula;
        setbuf(stdin, NULL);
        fgets(alunos[i].mat, 25, stdin);
        for(j = 0; j < 25; j++){         //esse loop, usado em todos os casos em que são escaneadas strings,
            if(alunos[i].mat[j] == '\n'){   //retira o \n de string lida por fgets();
                alunos[i].mat[j] = 0;
            }
        }

        printf("Insira o nome do aluno (max 255 caracteres).\n>> ");                            //nome;
        setbuf(stdin, NULL);
        fgets(alunos[i].nom, 256, stdin);
        for(j = 0; j < 256 ; j++){
            if(alunos[i].nom[j] == '\n'){
                alunos[i].nom[j] = 0;
            }
        }

        printf("Insira o numero da disciplina.\n>> ");                                          //disciplina;
        scanf("%d", &alunos[i].cod);

        printf("Insira as notas das duas provas do aluno.\n>> ");
        scanf("%f%f", &alunos[i].n1, &alunos[i].n2);

        printf("\n=========\n\n");
    }

    for(i = 0; i < qtd; i++){
        printf("\n\t%s\t---\t%s\t---\t%d\t---\tMedia: %.2f\t\n", alunos[i].mat, alunos[i].nom, alunos[i].cod, ((alunos[i].n1 + (alunos[i].n2 * 2)) / 3));
    }

    printf("\n");
    system("pause");
    return 0;
}