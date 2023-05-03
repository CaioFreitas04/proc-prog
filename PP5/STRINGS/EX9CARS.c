#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    //var. car[][] armazena os nomes dos carros, econ[] a eficiência, most o econ[] do modelo mais eficiente, e pos a sua posição;
    char car[5][256];
    float econ[5], most;
    int i, pos;

    //loop dos carros;
    printf("Insira os nomes de cinco modelos de carro.\n>> ");
    for(i = 0; i < 5; i++){
        fflush(stdin);
        fgets(car[i], 256, stdin);
    }

    //loop da economia;
    printf("Insira a quantidade de quilometros rodados com um litro de gasolina, por modelo de carro.\n>> ");
    for(i = 0; i < 5; i++){
        scanf("%f", &econ[i]);
    }

    //loop de impressão;
    printf("\n");
    for(i = 0; i < 5; i++){
        printf("%s %fkm/L.\n", car[i], econ[i]);
    }
    printf("\n\n");

    //encontrando o veículo mais econômico e imprimindo;
    most = econ[0];
    pos = 0;
    for(i = 0; i < 5; i++){
        if(econ[i] > most){
            most = econ[i];
            pos = i;
        }
    }
    printf("Veiculo mais economico: %s.\n\n", car[pos]);

    system("pause");
    return 0;
}