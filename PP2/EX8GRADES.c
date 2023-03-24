#include <stdio.h>
#include <stdlib.h>

int main(){

    //variáveis e escaneamento.
    float G1, G2;
    printf("Insira duas notas:\n");
    scanf("%f %f", &G1, &G2);

    //testando se as notas são possíveis: não podem ser menores do que zero ou maiores do que 10.
    if(G1 < 0 || G1 > 10 || G2 < 0 || G2 > 10){
        printf("Notas invalidas.\nEncerrando programa...\n");
    }
    else{
        printf("Media das notas: %.2f.\n", (G1 + G2)/2);
    }
    system("pause");
    return 0;
}