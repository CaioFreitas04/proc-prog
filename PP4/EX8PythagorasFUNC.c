#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float hyp(float a, float b);    //função que encontra a hipotenusa dos catetos.

int main(){
    //var.
    float cat1, cat2, hipo;
    printf("Insira os catetos do triangulo retangulo.\n>> ");
    scanf("%f %f", &cat1, &cat2);
    hipo = hyp(cat1, cat2);
    if(hipo < 0) printf("Valor(es) invalido(s)!\n\n");
    else printf("A hipotenusa desse triangulo mede %f u.c.\n\n", hipo);
    system("pause");
    return 0;
}


float hyp(float a, float b){        //requer math.h.
    float c;
    if(a <= 0 || b <= 0) return -1; //código de erro em caso de medidas negativas.
    else{
        a *= a;
        b *= b;
        c = sqrt(a + b);
        return c;
    }
}