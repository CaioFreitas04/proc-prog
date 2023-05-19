#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, y, z, *px, *py, *pz;
    px = &x; py = &y; pz = &z;

    printf("Digite tres numeros inteiros.\n>> ");
    scanf("%d%d%d", px, py, pz);

    //se fosse uma array, implementaria uma bubblesort. Sem meme;
    printf("\n");
    if(*px < *py && *px < *pz){
        printf("X = %d, add. %p\n", *px, px);
        if(*py < *pz){
            printf("Y = %d, add %p\n", *py, py);
            printf("Z = %d, add. %p\n", *pz, pz);
        }
        else{
            printf("Z = %d, add %p\n", *pz, pz);
            printf("Y = %d, add. %p\n", *py, py);
        }
    }
    else if(*py < *px && *py < *pz){
        printf("Y = %d, add. %p\n", *py, py);
        if(*px < *pz){
            printf("X = %d, add %p\n", *px, px);
            printf("Z = %d, add. %p\n", *pz, pz);
        }
        else{
            printf("Z = %d, add %p\n", *pz, pz);
            printf("X = %d, add. %p\n", *px, px);
        }
    }
    else{
        printf("Z = %d, add. %p\n", *pz, pz);
        if(*py < *px){
            printf("Y = %d, add %p\n", *py, py);
            printf("X = %d, add. %p\n", *px, px);
        }
        else{
            printf("X = %d, add %p\n", *px, px);
            printf("Y = %d, add. %p\n", *py, py);
        }
    }
    //extremamente feio;

    printf("\n\n");
    system("pause");
    return 0;
}