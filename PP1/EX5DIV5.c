#include <stdio.h>
#include <stdlib.h>

int main(){

    float x;
    float y;            //declaring an input and output variable, x and y respectively.

    printf("Input a real number to be divided by five:\n");
    scanf("%f", &x);    //scanning user input.

    y = x / 5;
    printf("One fifth of the input equals %f.\n", y);
    system("pause");
    return 0;

}