#include <stdio.h>
#include <stdlib.h>

void dateread(int dd, int mm, int yyyy); //função de leitura de data.
int datecheck(int dd, int mm, int yyyy); //função que checa se uma data é verdadeira.

int main(){
    //var.
    int dia, mes, ano;

    printf("Insira a data atual no seguinte formato (dd mm yyyy): ");
    scanf("%d %d %d", &dia, &mes, &ano);

    dateread(dia, mes, ano);

    system("pause");
    return 0;
}

void dateread(int dd, int mm, int yyyy){
    if(!(datecheck(dd, mm, yyyy))){
        printf("Invalido!\n\n");
    }
    else{
        //printf manipulado para que pareça uma única frase.
        printf("\n%d de ", dd);
        switch(mm){
            case 1: printf("janeiro de "); break;
            case 2: printf("fevereiro de "); break;
            case 3: printf("marco de "); break;
            case 4: printf("abril de "); break;
            case 5: printf("maio de "); break;
            case 6: printf("junho de "); break;
            case 7: printf("julho de "); break;
            case 8: printf("agosto de "); break;
            case 9: printf("setembro de "); break;
            case 10: printf("outubro de "); break;
            case 11: printf("novembro de "); break;
            case 12: printf("dezembro de "); break;
        }
        printf("%d.\n\n", yyyy);
    }
}


int datecheck(int dd, int mm, int yyyy){        //esse espaguete veio de outro programa: se a data existe, 1 é retornado.
                                                //senão, 0 é retornado.
    if(dd < 1 || mm < 1 || dd > 31 || mm > 12 || yyyy < 1){
        return 0;
    }
    else{
        //execução normal :3
        if(mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12){
            return 1;
        }
        else if(mm == 4 || mm == 6 || mm == 9 || mm == 11){
            if(dd == 31){
                return 0;
            }
            else return 1;
        }
        else if(mm == 2){
            if(yyyy % 400 == 0 || (yyyy % 4 == 0 && yyyy % 100 != 0)){
                if(dd > 29) return 0;
                else return 1;
            }
            else{
                if(dd > 28) return 0;
                else return 1;
            }
        }
    }
}