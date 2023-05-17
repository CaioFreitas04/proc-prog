#include <stdio.h>
#include <stdlib.h>


typedef struct voo{     //armazena um código de entrada e um de saída;
    int in, out;
} voo;

typedef struct aeroporto{   //código, voos chegando, voos saindo;
    int cod, in, out;
} aprt;


int main(){
    //var.
    voo v[5];
    aprt a[5];
    int i, j;

    //incializando todos os aeroportos com 0 em seus voos de entrada e saída;
    for(i = 0; i < 5; i++){
        a[i].cod = i;
        a[i].in = 0;
        a[i].out = 0;
    }

    //coletando dados dos voos;
    printf("\tFLUXO DE VOOS\n\n");
    for(i = 0; i < 5; i++){
        do{
            printf("Insira os codigos do aeroporto de saida e chegada do %do aviao (0 a 4, devem ser diferentes).\n>> ", i+1);
            scanf("%d%d", &v[i].in, &v[i].out);
            if(v[i].in > 4 || v[i].in < 0 || v[i].out > 4 || v[i].out < 0 || v[i].in == v[i].out) printf("VOO INVALIDO!\n");
        }while(v[i].in > 4 || v[i].in < 0 || v[i].out > 4 || v[i].out < 0 || v[i].in == v[i].out);
        printf("\n\t= = = = = = = = =\n\n");
    }

    //associando os voos aos aeroportos;
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if(v[i].in == a[j].cod) a[j].in++;
            if(v[i].out == a[j].cod) a[j].out++;
        }
    }
    
    //imprimindo resultados dos aeroportos;
    printf("\n\t= = = = = = = = = = = = = = = = = = = = =\n");
    for(i = 0; i < 5; i++){
        printf("\tAEROPORTO N%d\tENTRANDO: %d\tSAINDO: %d\n", a[i].cod, a[i].in, a[i].out);
    }
    printf("\t= = = = = = = = = = = = = = = = = = = = =\n\n");
    system("pause");
    return 0;
}