#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){

    //variável.
    int CDWN;
    printf("Contagem regressiva!\n");
    for(CDWN = 10; CDWN >= 0; CDWN--){
        printf("%d... ", CDWN);
        sleep(1);
        
    }
    printf("FIM!\n");
    system("pause");
    return 0;
}
