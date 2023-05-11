#include <stdio.h>
#include <stdlib.h>
#include <math.h>   //necessário para as funções seno e cosseno;

typedef struct polarpoint{  //ponto em um espaço bidimensional (notação polar);
    double r, a;            //raio e argumento;
} polp;

typedef struct cartesianpoint{  //ponto em um espaço bidimensional (notação cartesiana);
    double x, y;
} carp;


carp polToCart(polp P);     //função que lê coordenadas polares e retorna coordenadas cartesianas;


int main(){
    //var. ponto está em coordenadas polares, e é a entrada. pontoS é o ponto de saída, em coords cartesianas;
    polp ponto;
    carp pontoS;

    printf("Esse programa converte coordenadas polares para coordenadas cartesianas.\n");
    printf("Insira o raio e o angulo de seu ponto (rad).\n>> ");
    scanf("%lf%lf", &ponto.r, &ponto.a);

    pontoS = polToCart(ponto);

    printf("Em coordenadas cartesianas, esse ponto tem como coordenadas (%lf, %lf).\n\n", pontoS.x, pontoS.y);
    system("pause");
    return 0;
}


carp polToCart(polp P){
    //var;
    carp P1;                
    P1.x = P.r * cos(P.a);
    P1.y = P.r * sin(P.a);

    return P1;
}