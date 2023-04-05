#include <stdio.h>
#include <stdlib.h>

int main(){

    //variáveis.
    int Chico = 150, Ze = 110, ano = 0;
    //loop principal.
    while(Chico != Ze){
        Chico += 2;
        Ze += 3;
        ano++;
    }
    printf("Chico tem 1.50m de altura e cresce 2cm por ano. Ze tem 1.10m de altura e cresce 3cm por ano. Portanto...\n");
    printf("Levarao %d anos para Ze alcancar a altura de Chico.\n\n", ano);
    system("pause");
    return 0;
}