#include <stdio.h>
#include <stdlib.h>

int main(){

    //var e escaneamento.
    char GENDER;
    float HEIGHT;
    printf("Insira seu genero (M/F): ");
    scanf("%c", &GENDER);
    if(GENDER != 'F' && GENDER != 'M'){
        printf("Esse programa nao suporta o seu genero, quem sabe no proximo :(\n");
        system("pause");
        return 0;
        //enby lives matter, sry babies.
    }
    printf("Insira sua altura em metros: ");
    scanf("%f", &HEIGHT);
    if(HEIGHT <= 0){
        printf("Voce nao existe nesse universo, aparentemente.\n");
        system("pause");
        return 0;
    }
    //operações
    if(GENDER == 'F'){
        printf("Seu peso ideal em kg: %.2f.\n", (62.1 * HEIGHT) - 44.7);
    }
    else{
        printf("Seu peso ideal em kg: %.2f.\n", (72.7 * HEIGHT) - 58);
    }
    system("pause");
    return 0;
}