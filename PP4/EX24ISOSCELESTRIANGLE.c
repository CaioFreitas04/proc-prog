#include <stdio.h>
#include <stdlib.h>

void DrawTriangle(int n);           //função que desenha triângulos.

int main(){
    //var.
    int H;
    printf("\t--DESENHA-TRIANGULOS--\n\n");
    printf("Qual deve ser a altura do triangulo?\n>> ");
    scanf("%d", &H);
    printf("\n\n");
    DrawTriangle(H);
    printf("\n\n");
    system("pause");
    return 0;
}


void DrawTriangle(int n){
    //var. s é o número de espaços vazios para que o triângulo seja desenhado corretamente.
    long i, j, s;
    if(n < 1){
        printf("Valor invalido!");
        return;
    }

    for(i = 1; i <= n; i++){
        
        for(s = 0; s < (n-i); s++){
            printf(" ");
        }

        for(j = 0; j < (i + (i - 1)); j++){
            printf("*");
        }

        for(s = 0; s < (n-i); s++){
            printf(" ");
        }

        printf("\n");
    }
}