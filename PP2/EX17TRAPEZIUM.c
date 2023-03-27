#include <stdio.h>
#include <stdlib.h>

int main(){
    
    //variáveis e escaneamento.
    float B, b, h;
    printf("Insira o comprimento das bases do trapezio, e sua altura:\n");
    scanf("%f %f %f", &B, &b, &h);

    //teste de realidade.
    if(B <= 0 || b <= 0 || h <= 0){
        printf("Medida(s) invalida(s)!\n");
    }
    else{
        //funcionamento normal do programa.
        printf("Area do trapezio: %.2f.\n", ((B + b) * h) / 2);
    }
    system("pause");
    return 0;
}