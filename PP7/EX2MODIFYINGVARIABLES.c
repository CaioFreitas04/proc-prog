#include <stdio.h>
#include <stdlib.h>

int main(){
    int x = 0, *px;
    float y = 0.0, *py;
    char z = 'a', *pz;

    px = &x;
    py = &y;
    pz = &z;

    printf("%d\n%f\n%c\n\n", x, y, z);

    *px = 7;
    *py = 3.1415;
    *pz = 'X';

    printf("%d\n%f\n%c\n\n", x, y, z);

    system("pause");
    return 0;
}