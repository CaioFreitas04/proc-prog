#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct complex{     //número complexo composto de parte real e parte imaginária;
    double real, imgn;
} cpx;


cpx ComplexCalc(cpx z, cpx w, int O);   //função que agrupa operações com números imaginários: soma, subtração, produto. O é a operação;
double ComplexMod(cpx z);               //função que retorna o módulo de um número complexo;


int main(){
    //var. z e w são os números imaginários, e R é o resultado das operações, e Mz e Mw são os módulos de z e w;
    cpx z, w, R;
    double Mz, Mw;

    printf("\t[CALCULADORA DE NUMEROS IMAGINARIOS]\n\n");
    printf("Escreva o seu primeiro numero complexo: primeiro a parte real, depois a imaginaria.\n >> ");
    scanf("%lf%lf", &z.real, &z.imgn);
    printf("\nEscreva o seu segundo numero complexo, da mesma forma.\n>> ");
    scanf("%lf%lf", &w.real, &w.imgn);

    R = ComplexCalc(z, w, 0);   //soma;
    printf("\n\n\tRESULTADOS:\nA soma dos dois numeros eh %lf + (%lfi).", R.real, R.imgn);
    R = ComplexCalc(z, w, 1);   //diferença;
    printf("\nA diferenca dos dois numeros eh %lf + (%lfi).", R.real, R.imgn);
    R = ComplexCalc(z, w, 2);   //produto;
    printf("\nO produto dos dois numeros eh %lf + (%lfi).", R.real, R.imgn);
    Mz = ComplexMod(z);
    Mw = ComplexMod(w);
    printf("\nOs modulos de seus dois numeros sao %lf e %lf respectivamente.\n\n", Mz, Mw);

    system("pause");
    return 0;
}


cpx ComplexCalc(cpx z, cpx w, int O){
    //var. R é o resultado dos cálculos;
    cpx R;

    switch(O){
        case 0: //soma;
            R.real = z.real + w.real;
            R.imgn = z.imgn + w.imgn;
            return R;
        case 1: //diferença;
            R.real = z.real - w.real;
            R.imgn = z.imgn - w.imgn;
            return R;
        case 2: //produto;
            R.real = (z.real * w.real) - (z.imgn * w.imgn);
            R.imgn = (z.real * w.imgn) + (z.imgn * w.real);
            return R;
    }
}

double ComplexMod(cpx z){   //o lendário Pitágoras;
    return sqrt((z.real * z.real) + (z.imgn * z.imgn));
}