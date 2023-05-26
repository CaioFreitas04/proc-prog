#include <stdio.h>
#include <stdlib.h>

int main(){
    //var. ipX são ponteiros de inteiros; aux é uma variável auxiliar que servirá para armazenar um elemento extra da array, e sorted é uma flag se diz que o vetor foi
    //ordenado ou não;
    int arr[10], *ip1, *ip3, aux, i, sorted = 0;
    ip1 = arr;
    ip3 = &aux;
    
    for(i = 0; i < 10; i++){
        printf("Insira o %do elemento de sua array de inteiros.\n>> ", i+1);
        scanf("%d", ip1+i);
    }

    //bubblesort;
    do{
        sorted = 1;
        for(i = 0; i < 9; i++){
            if(*(ip1+i) > *(ip1+i+1)){
                *ip3 = *(ip1+i);            //invertendo as posições;
                *(ip1+i) = *(ip1+i+1);
                *(ip1+i+1) = *ip3;

                sorted = 0;
            }
        }
    }while(sorted == 0);

    printf("\n\nMenor valor: %d.\nMaior valor: %d.\n\n", *(ip1), *(ip1+9));
    system("pause");
    return 0;
}