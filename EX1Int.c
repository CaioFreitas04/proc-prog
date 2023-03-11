#include <stdio.h>
#include <stdlib.h>                                         //Declaring libraries.

int main(){                                                 //Main function, where the code is executed.

    int X;
    printf("Please type a whole number:\n");                //be friendly with the user
    scanf("%d", &X);                                        //collect the data
    printf("Congratulations, you typed the number %d.\n", X); //and display it, friendli-ly.

    system("pause");                                        //Pauses execution so the output can be seen.

    return 0;
}                                                           //End of program.
