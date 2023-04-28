#include <stdio.h>
#include <stdlib.h>

int main(){
    //var.
    float array[5], greatest, smallest;
    int posGr = 0, posSm = 0, i;
    printf("Insira cinco valores em seu vetor:\n");
    for(i = 0; i < 5; i++){
        scanf("%f", &array[i]);
    }
    greatest = array[0];
    smallest = array[0];

    //após o preenchimento do vetor, inicia-se um loop para ler seus valores e compará-los entre si.
    //dessa forma, será determinada a posição do maior vetor.
    for(i = 0; i < 5; i++){
        if(array[i] > greatest){
            posGr = i;
            greatest = array[i];
        }
        if(array[i] < smallest){
            posSm = i;
            smallest = array[i];
        }
    }

    posGr++;        //esses valores são ajustados para que as posições reais sejam exibidas.
    posSm++;

    printf("O maior valor esta na %da posicao, e o menor na %da posicao.\n\n", posGr, posSm);

    system("pause");
    return 0;
}