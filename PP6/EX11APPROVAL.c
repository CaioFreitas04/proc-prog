#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct aluno{
    char nom[256], mat[256];
    float med;
} aln;


int main(){
    //var. ent é o vetor de entrada, apr são os aprovados, e rep são os !aprovados;
    //apCount e repCount contam quantos alunos foram aprovados e quantos foram !aprovados;
    aln ent[10], apr[10], rep[10];
    int i, j, apCount = 0, repCount = 0;

    printf("\tREGISTRO DE APROVACAO\n\n");
    for(i = 0; i < 10; i++){                                 //coletando dados;
        printf("Insira o nome do %do aluno.\n>> ", i+1);
        setbuf(stdin, NULL);
        fgets(ent[i].nom, 256, stdin);
        for(j = 0; ent[i].nom[j] != '\0'; j++){             //removendo o \n. Maldito fgets();
            if(ent[i].nom[j] == '\n') ent[i].nom[j] = 0;
        }

        printf("Insira a matricula do %do aluno.\n>> ", i+1);
        setbuf(stdin, NULL);
        fgets(ent[i].mat, 256, stdin);
        for(j = 0; ent[i].mat[j] != '\0'; j++){             //removendo o \n. Maldito fgets();
            if(ent[i].mat[j] == '\n') ent[i].mat[j] = 0;
        }

        printf("Insira a media final do %do aluno.\n>> ", i+1);
        scanf("%f", &ent[i].med);
        printf("\n= = = = = = = = =\n\n");
    }

    //testando se um aluno foi aprovado ou reprovado;
    for(i = 0; i < 10; i++){
        if(ent[i].med >= 5.0){
            strcpy(apr[apCount].nom, ent[i].nom);
            strcpy(apr[apCount].mat, ent[i].mat);
            apr[apCount].med = ent[i].med;
            apCount++;
        }
        else{
            strcpy(rep[repCount].nom, ent[i].nom);
            strcpy(rep[repCount].mat, ent[i].mat);
            rep[repCount].med = ent[i].med;
            repCount++;
        }
    }

    //impressão dos resultados;
    printf("\tAPROVADOS\n\n");
    for(i = 0; i < apCount; i++){
        printf("\t%s\t%s\tMedia: %f\n", apr[i].nom, apr[i].mat, apr[i].med);
    }
    printf("\n\tREPROVADOS\n\n");
    for(i = 0; i < repCount; i++){
        printf("\t%s\t%s\tMedia: %f\n", rep[i].nom, rep[i].mat, rep[i].med);
    }

    printf("\n\n");
    system("pause");
    return 0;
}
