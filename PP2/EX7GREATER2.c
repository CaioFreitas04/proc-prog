#include <stdio.h>
#include <stdlib.h>

int main(){

    //declarando variáveis e escaneando os valores.
    float x, y;
    printf("Digite dois numeros para comparacao:\n");
    scanf("%f %f", &x, &y);

    //testando qual o maior.
    if(x > y){
        printf("Numero maior: %f\n");
    }
    else if(x < y){
        printf("Numero maior: %f\n", y);
    }
    else{
        printf("Numeros iguais\n");
    }
    system("pause");
    return 0;
}