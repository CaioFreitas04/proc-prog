#include <stdio.h>
#include <stdlib.h>                     //Declaring libraries.

int main(){                             //Main function, where the code is executed.

    float X;
    printf("Please type a real number:\n");    //be friendly with the user
    scanf("%f", &X);                            //collect the data
    printf("Congratulations, you typed the number %f.\n", X); //and display it, friendli-ly.
    system("pause");

    return 0;
}                                       //End of program.