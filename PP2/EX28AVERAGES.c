#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    //variáveis e apresentação do programa.
    int x, y, z;
    double R;
    char MODE;
    //testando se os valores são validos.
    do{
        printf("Insira tres numeros inteiros positivos:\n");
        scanf("%d %d %d", &x, &y, &z);
        if(x < 1 || y < 1 || z < 1){
            printf("Valor(es) invalido(s)!\n\n");
        }
    } while(x < 1 || y < 1 || z < 1);

    //seleção de modo.
    do{
        printf("Selecione a media a ser calculada (codigo maiusculo):\n");
        printf("(G)eometrica.\n");
        printf("(P)onderada.\n");
        printf("(H)armonica.\n");
        printf("(A)ritmetica.\n");
        fflush(stdin);
        scanf("%c", &MODE);
        //detectando se o código de modo é um valor válido.
        if(MODE != 71 && MODE != 80 && MODE != 72 && MODE != 65){
            printf("Modo invalido!\n\n");
        }
    } while(MODE != 71 && MODE != 80 && MODE != 72 && MODE != 65);
    
    //finalmente, a realização dos cálculos.
    switch(MODE){
        case 'G': R = cbrt(x * y * z * 1.0); break;
        case 'P': R = ((1.0 * x) + (2.0 * y) + (3.0 * z)) / 3.0; break;
        case 'H': R = 1.0 / ((1.0 / x) + (1.0 / y) + (1.0 / z)); break;
        case 'A': R = (x + y + z) / 3.0; break;
    }
    printf("\nResultado: %lf.\n\n", R);
    system("pause");
    return 0;
}