#include <stdio.h>
#include <stdlib.h>

long timetoseconds(int hh, int mm, int ss); //função que converte horas, minutos, e segundos para segundos.

int main(){

    //var.
    int hh, mm, ss, total;
    printf("\t--CONVERSOR PARA SEGUNDOS--\n\nInsira o numero de horas, minutos, e segundos (hh mm ss).\n>> ");
    scanf("%d %d %d", &hh, &mm, &ss);
    total = timetoseconds(hh, mm, ss);
    if(total == -1){
        printf("Valor(es) invalido(s)!\n\n");
        system("pause");
        return 0;
    }
    printf("\nO tempo, em segundos: %ld.\n\n", total);

    system("pause");
    return 0;

}



long timetoseconds(int hh, int mm, int ss){
    long totalsecs;
    if(hh < 0 || mm < 0 || ss < 0) return -1; //código de erro caso hajam valores inválidos.

    while(ss >= 60){                          //converte segundos excedentes em minutos.
        ss -= 60;
        mm++;
    }
    while(mm >= 60){                          //converte minutos excedentes em segundos.
        mm -= 60;
        hh++;
    }
    totalsecs = (hh * 3600) + (mm * 60) + ss;
    return totalsecs;
}