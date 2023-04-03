#include <stdio.h>
#include <stdlib.h>

int main(){

    //variáveis.
    float Current, smallest, greatest;
    int i;
    printf("Dez numeros reais.\n\n");
    for(i = 0; i < 10; i++){
        printf("N: ");
        scanf("%f", &Current);
        //insere o primeiro número diretamente nas variáveis.
        if(i == 0){
            smallest = Current;
            greatest = Current;
        }
        //testando se o valor atual é maior do que o maior armazenado ou menor do que o menor armazenado.
        if(Current > greatest) greatest = Current;
        if(Current < smallest) smallest = Current;
    }
    printf("\nMaior numero: %f.\nMenor numero: %f.\n\n", greatest, smallest);
    system("pause");
    return 0;
}