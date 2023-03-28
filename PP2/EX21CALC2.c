#include <stdio.h>
#include <stdlib.h>

int main(){

    //declarando variáveis e preparando o programa.
    int MODE;
    float x, y, R = 0;
    printf("Escolha a opcao:\n1- Soma de 2 numeros.\n");
    printf("2- Diferenca entre 2 numeros (maior pelo menor).\n");
    printf("3- produto entre 2 numeros.\n4- Divisao entre 2 numeros (o denominador nao pode ser zero).\n");
    printf("Opcao: ");
    scanf("%d", &MODE);

    //feito isso, o programa é repartido em quatro: um para cada operação.
    //os testes apropriados são feitos para cada também.
    switch(MODE){
        case 1:
            printf("Insira dois numeros a serem somados:\n");
            scanf("%f %f", &x, &y);
            R = x + y;
            break;
        case 2:
            printf("Insira um minuendo e um subtraendo:\n");
            scanf("%f %f", &x, &y);
            if(x > y){
                R = x - y;
            }
            else{
                R = y - x;
            }
            break;
        case 3:
            printf("Insira dois numeros a serem multiplicados:\n");
            scanf("%f %f", &x, &y);
            R = x * y;
            break;
        case 4:
            printf("Insira um numerador e um denominador:\n");
            scanf("%f %f", &x, &y);
            if(y == 0){
                printf("Calculo impossivel!\n");
                system("pause");
                return 0;
            }
            else{
                R = x / y;
            }
            break;
        default:
            printf("Operacao invalida!\n");
            system("pause");
            return 0;
    }
    printf("Resultado: %f\n", R);
    system("pause");
    return 0;
}