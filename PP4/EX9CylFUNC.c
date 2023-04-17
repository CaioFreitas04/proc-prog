#include <stdio.h>
#include <stdlib.h>

float circyl(float h, float r); //função de cálculo de cilindro circular.

int main(){
    //var.
    float altura, raio, VOLUME;
    printf("\t--CALCULADORA DE CILINDROS--\n\n");
    printf("Insira a altura e o raio do cilindro.\n>> ");
    scanf("%f %f", &altura, &raio);
    VOLUME = circyl(altura, raio);
    if(VOLUME < 0) printf("Valor(es) invalido(s)!\n\n");
    else printf("Volume do cilindro: %f u.v.\n\n", VOLUME);
    system("pause");
    return 0;

}



float circyl(float h, float r){
    const float PI = 3.141592;
    float V;
    if(h <= 0 || r <= 0) return -1; //código de erro em caso de valores impossíveis.
    V = h * (r * r) * PI;
    return V;
}