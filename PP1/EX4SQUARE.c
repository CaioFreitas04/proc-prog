#include <stdio.h>
#include <stdlib.h>

int main(){

    float x;                                                                //declaring a float variable.
    float y;                                                                //and one for the squaring result.
    printf("Welcome to the Squarifier (patent pending), input a real number:\n");

    scanf("%f", &x);
    y = x * x;

    printf("\nThe square of the number is %f.\n", y);

    system("pause");                                                        //pause so the result can be read.
    return 0;

}