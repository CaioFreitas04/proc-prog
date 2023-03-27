#include <stdio.h>
#include <stdlib.h>

int main(){

    //declarando variáveis e preparando o programa.
    char MODE;
    float x, y, R;
    printf("Selecione (A)dicao, (S)ubtracao, (D)ivisao, ou (M)ultiplicacao: ");
    scanf("%c", &MODE);

    //feito isso, o programa é repartido em quatro: um para cada operação.
    switch(MODE){
        case 'A':
            printf("Insira dois numeros a serem somados:\n");
            scanf("%f %f", &x, &y);
            R = x + y;
            break;
        case 'S':
            printf("Insira um minuendo e um subtraendo:\n");
            scanf("%f %f", &x, &y);
            R = x - y;
            break;
        case 'D':
            printf("Insira um dividendo e um divisor:\n");
            scanf("%f %f", &x, &y);
            R = x / y;
            break;
        case 'M':
            printf("Insira dois numeros a serem multiplicados:\n");
            scanf("%f %f", &x, &y);
            R = x * y;
            break;
        default: printf("Operacao invalida!\n");
    }
    printf("Resultado: %f\n", R);
    system("pause");
    return 0;
}