#include <stdio.h>
#include <stdlib.h>

int main(){
    //var.
    int i, pos1, pos2;
    float array[8];

    printf("Preencha o vetor com OITO valores (um por vez):\n");
    for(i = 0; i < 8; i++){
        printf(">> ");
        scanf("%f", &array[i]);
        fflush(stdin);
    }
                                                                                   //isso deve deixar o programa melhor para usuários leigos.
    do{
        printf("\nSelecione duas posicoes a serem somadas, de 1 a 8.\n>> "); 
        scanf("%d%d", &pos1, &pos2);
        if(pos1 < 1 || pos1 > 8 || pos2 < 1 || pos2 > 8) printf("INVALIDO!\n\n");   //GUI que repete infinitamente até que o usuário introduza valores válidos.
    }while(pos1 < 1 || pos1 > 8 || pos2 < 1 || pos2 > 8);

    pos1--;
    pos2--;

    printf("\n\nSoma: %f.\n\n", array[pos1] + array[pos2]);
    system("pause");
    return 0;

}
