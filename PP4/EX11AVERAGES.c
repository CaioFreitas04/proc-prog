#include <stdio.h>
#include <stdlib.h>

int GUI();                                             //interface bonitinha.
float grader(float g1, float g2, float g3, char MODE);  //função das notas.

int main(){
    
    //var.
    int dummy;

    do{
        dummy = GUI();
    }while(dummy);

    system("pause");
    return 0;
}

int GUI(){

    float nota1, nota2, nota3;
    char modo;

    printf("\t--CALCULADORA DE NOTAS--\n\n");
    printf("Insira as tres notas.\n>> ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    if(nota1 < 0 || nota2 < 0 || nota3 < 0){
        printf("ERR_NOTA_INVALIDA\n\n");
        return 1;                               //código de erro 1 faz com que o programa se repita.
    }
    printf("\n\nSelecione o modo:\n\nMedia (A)ritmetica.\nMedia (P)onderada.\n\n>>");
    fflush(stdin);
    scanf("%c", &modo);
    if(modo != 'A' && modo != 'a' && modo != 'P' && modo != 'p'){
        printf("ERR_MODO_INVALIDO\n\n");
        return 1;
    }

    printf("\n\nNota final do aluno: %f pts!\n\n", grader(nota1, nota2, nota3, modo));
    return 0;

}

float grader(float g1, float g2, float g3, char MODE){
    switch(MODE){
        case 'A':
        case 'a': return (g1 + g2 + g3)/3; break;
        case 'P':
        case 'p': return ((5*g1) + (3*g2) + (2*g3))/10; break;
        default: printf("ERR_ALGODEERRADONAOESTACERTO.\n\n");
    }
}