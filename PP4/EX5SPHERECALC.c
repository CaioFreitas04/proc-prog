#include <stdio.h>
#include <stdlib.h>

double sphere(double radius);

int main(){
    //var.
    double raio;

    printf("\t--CALCULADORA DE ESFERAS--\n\n");
    printf("Raio?\n>> ");
    scanf("%lf", &raio);

    printf("Volume da esfera: %lf unidades de volume.\n\n", sphere(raio));

    system("pause");
    return 0;
}


double sphere(double radius){
    
    double volume;
    const float PI = 3.14159265;
    volume = (4/3) * PI * (radius * radius * radius);

    return volume;
}