#include <stdio.h>
#include <stdlib.h>


int bubblesort(int *arr, int l);                    //literalmente escrevi isso ontem;


int main(){
    int vet[3], i;
    printf("Insira tres valores inteiros para serem ordenados.\n>> ");
    for(i = 0; i < 3; i++){
        scanf("%d", &vet[i]);
    }
    if(bubblesort(vet, 3)){
        printf("\n\n\tTodos os valores sao iguais!");
    }
    printf("\n\n");
    for(i = 0; i < 3; i++){
            printf("\t%d", vet[i]);
    }
    printf("\n\n");
    system("pause");
    return 0;
}


int bubblesort(int *arr, int l){
    int i, aux, chk = 1;
    for(i = 0; i < (l-1); i++){     //no primeiro momento, chk é usada para testar se todos os itens são iguais ou não. Se sim, retornar 1;
        if(arr[i] != arr[i+1]){
            chk = 0;
            break;
        }
    }
    if(chk == 1) return 1;          //todos os itens são iguais e não precisam ser ordenados;
    else{
        do{                         //a parte que eu escrevi ontem. Bubblesort <3;
            chk = 1;
            for(i = 0; i < (l-1); i++){
                if(arr[i] > arr[i+1]){
                    aux = arr[i];
                    arr[i] = arr[i+1];
                    arr[i+1] = aux;
                    chk = 0;
                }
            }
        }while(chk != 1);
        return 0;
    }
}