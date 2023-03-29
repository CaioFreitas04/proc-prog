#include <stdio.h>
#include <stdlib.h>

int main(){
    //variáveis e introdução do programa.
    float GRAD;
    int ABS, CONC;
    //garantindo que valores reais serão inseridos.
    do{
        printf("Insira sua nota (0.0 ate 10.0): ");
        scanf("%f", &GRAD);
        if(GRAD < 0 || GRAD > 10){
            printf("Nota invalida!\n\n");
        }
    } while (GRAD < 0 || GRAD > 10);
    do{
        printf("Insira seu numero de faltas: ");
        scanf("%d", &ABS);
        if(ABS < 0){
            printf("Faltas invalidas!\n\n");
        }
    }while (ABS < 0);
    //lógica para atribuir os conceitos.
    if(GRAD < 4) CONC = 0;
    else if(GRAD < 5) CONC = 1;
    else if(GRAD < 7.5) CONC = 2;
    else if(GRAD < 9) CONC = 3;
    else if(GRAD <= 10) CONC = 4;
    if(ABS > 20) CONC -= 1;
    //Atribuindo letras aos conceitos.
    printf("\nConceito: ");
    switch(CONC){
        case 4: printf("A!\n"); break;
        case 3: printf("B!\n"); break;
        case 2: printf("C!\n"); break;
        case 1: printf("D!\n"); break;
        default: printf("E!\n"); break;
    }
    system("pause");
    return 0;
}