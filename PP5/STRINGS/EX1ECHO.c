#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    
    //var
    char echo[256];

    printf("Digite ate 255 caracteres.\n>> ");
    fflush(stdin);
    fgets(echo, 256, stdin);
    printf("\n%s\n\n", echo);

    system("pause");
    return 0;
}