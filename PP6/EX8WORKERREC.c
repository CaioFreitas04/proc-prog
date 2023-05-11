#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct data{                //armazena dias, meses, e anos;
    unsigned int day, mon, yr;
} data;

typedef struct trabalhador{         //idade, código de setor, salário, nome, sexo, cargo, data de nascimento;
    unsigned int idd, cod, sal;
    char nome[256], sex, carg[31];
    data nasc;
} wrk;


int main(){

    //var.
    wrk trab;
    int i;

    printf("\t--BANCO DE DADOS DE TRABALHADOR--\n\n");

    printf("Insira o nome do funcionario (max 255 caracteres).\n>> ");  //nome;
    setbuf(stdin, NULL);
    fgets(trab.nome, 256, stdin);
    for(i = 0; i < 256; i++){
        if(trab.nome[i] == '\n') trab.nome[i] = 0;
    }

    printf("Insira o cargo do funcionario (max 30 caracteres).\n>> ");  //cargo;
    setbuf(stdin, NULL);
    fgets(trab.carg, 31, stdin);
    for(i = 0; i < 31; i++){
        if(trab.carg[i] == '\n') trab.carg[i] = 0;
    }

    printf("Insira o codigo de seu setor (0-99).");                     //código de setor;
    do{
        printf("\n>> ");
        scanf("%u", &trab.cod);
    }while(trab.cod < 0 || trab.cod > 99);

    printf("Insira o seu salario (arredonde centavos).\n>> ");          //salário;
    scanf("%u", &trab.sal);

    printf("Insira a sua idade.\n>> ");                                 //idade;
    scanf("%u", &trab.idd);

    printf("Insira seu sexo (M/F).\n>> ");                              //séguiso;
    setbuf(stdin, NULL);
    scanf("%c", &trab.sex);

    printf("Insira sua data de nascimento (dd mm yyyy).\n>> ");         //data de nascimento;
    scanf("%u%u%u", &trab.nasc.day, &trab.nasc.mon, &trab.nasc.yr);


    printf("\n\n\tNOME: %s.\n", trab.nome);
    printf("\tCARGO: %s.\n", trab.carg);
    printf("\tSETOR: %u.\n", trab.cod);
    printf("\tSALARIO: %u.\n", trab.sal);
    printf("\tSEXO: %c.\n", trab.sex);
    printf("\tIDADE: %u.\n", trab.idd);
    printf("\tANIVERSARIO: %u/%u/%u.\n\n", trab.nasc.day, trab.nasc.mon, trab.nasc.yr);

    system("pause");
    return 0;
}