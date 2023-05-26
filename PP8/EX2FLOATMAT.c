#include <stdio.h>
#include <stdlib.h>

int main(){
    float mat[3][3], *fp;
    int i;

    fp = &mat[0][0];
    for(i = 0; i < 9; i++){
        printf("mat[%d][%d] = %p\n\n", (i / 3), (i % 3), fp+i);
    }

    system("pause");
    return 0;
}