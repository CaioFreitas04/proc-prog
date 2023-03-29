#include <stdio.h>
#include <stdlib.h>

int main(){

    //variáveis.
    int dd, mm, yyyy;
    printf("Insira o dia: ");
    scanf("%d", &dd);
    printf("Insira o mes: ");
    scanf("%d", &mm);
    printf("insira o ano: ");
    scanf("%d", &yyyy);
    //testando os casos mais básicos: dias e meses menores do que 1, por exemplo.
    if(dd < 1 || mm < 1 || dd > 31 || mm > 12){
        printf("Essa data nao existe!\n");
    }
    else{
        //execução normal :3
        if(mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12){
            printf("%d/%d/%d existe!\n", dd, mm, yyyy);
        }
        else if(mm == 4 || mm == 6 || mm == 9 || mm == 11){
            if(dd == 31){
                printf("Essa data nao existe!\n");
            }
            else printf("%d/%d/%d existe!\n", dd, mm, yyyy);
        }
        else if(mm == 2){
            if(yyyy % 400 == 0 || (yyyy % 4 == 0 && yyyy % 100 != 0)){
                if(dd > 29) printf("Essa data nao existe!\n");
                else printf("%d/%d/%d existe!\n", dd, mm, yyyy);
            }
            else{
                if(dd > 28) printf("Essa data nao existe!\n");
                else printf("%d/%d/%d existe!\n", dd, mm, yyyy);
            }
        }
    }
    system("pause");
    return 0;
}