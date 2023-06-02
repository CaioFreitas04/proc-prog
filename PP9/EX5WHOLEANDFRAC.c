#include <stdio.h>
#include <stdlib.h>


void frac(float num, int *inteiro, float *frac);    //separa a parte fracionária da parte inteira de um real;


int main(){
    float num, f;
    int i;
    printf("Insira um numero real.\n>> ");
    scanf("%f", &num);
    frac(num, &i, &f);
    printf("\n\n\tParte inteira: %d.\n\tParte fracionaria: %f.\n\n", i, f);
    system("pause");
    return 0;
}


void frac(float num, int *inteiro, float *frac){
    int i;
    *frac = num;
    *inteiro = *frac;
    *frac -= *inteiro;
}