#include <stdio.h>
#include <stdlib.h>

#define pi 3.141592

void calc_esfera(float R, float *area, float *volume);       //calcula a área e o volume de uma esfera;


int main(){
    float R, A, V;
    printf("Insira o raio de sua esfera.\n>> ");
    scanf("%f", &R);
    calc_esfera(R, &A, &V);
    printf("\n\n\tArea da superficie: %f.\n\tVolume: %f.\n\n", A, V);
    system("pause");
    return 0;
}


void calc_esfera(float R, float *area, float *volume){
    *area = 4 * pi * R * R;
    *volume = (4 * pi * R * R * R)/3;
}