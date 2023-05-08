#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct pessoa{      //armazena o nome, a idade, e o endereço de uma pessoa.
    unsigned int age;
    char name[256], addr[256];
} pessoa;


int main(){

    //var;
    pessoa individuo;

    printf("Qual o seu nome? (max 256 caracteres)\n>> ");
    fflush(stdin);
    scanf("%s", &individuo.name);

    printf("Qual sua idade?\n>> ");
    fflush(stdin);
    scanf("%u", &individuo.age);

    printf("Qual seu endereco?\n>> ");
    fflush(stdin);
    scanf("%s", &individuo.addr);

    printf("\n\n%s  -  %u anos, mora em %s.\n\n", individuo.name, individuo.age, individuo.addr);

    system("pause");
    return 0;
}