#include <stdio.h>
#include <stdlib.h>

int main(){

    //variável.
    int age;
    printf("Insira a idade do nadador:\n");
    scanf("%d", &age);

    //separando as categorias por idade.
    if(age < 5) printf("Nao pode participar!\n");
    else if(age >= 5 && age <= 7) printf("Infantil A!\n");
    else if(age >= 8 && age <= 10) printf("Infantil B!\n");
    else if(age >= 11 && age <= 13) printf("Juvenil A!\n");
    else if(age >= 14 && age <= 17) printf("Juvenil B!\n");
    else if(age >= 18) printf("Senior!\n");
    system("pause");
    return 0;
}