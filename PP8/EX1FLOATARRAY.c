#include <stdio.h>
#include <stdlib.h>

int main(){
    //var;
    float arr[10], *fp;
    int i;
    fp = arr;

    for(i = 0; i < 10; i++){
        printf("array[%d] = %p\n\n", i, fp+i);
    }

    system("pause");
    return 0;
}