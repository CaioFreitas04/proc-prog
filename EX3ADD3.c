#include <stdio.h>
#include <stdlib.h>                     //Declaring libraries.

int main(){                             //Main function, where the code is executed.

    int x;
    int y;
    int z;
    int SumXYZ;

    printf("Welcome to the Three-Integer Adder(tm), please input your first integer:\n"); //sequentially collect the data while entertaining the end-user.
    scanf("%d", &x);
    printf("\nNow please input your second integer:\n");
    scanf("%d", &y);
    printf("\nNow, finally, input your third integer:\n");
    scanf("%d", &z);

    SumXYZ = x + y + z;
    printf("\nThe sum of your three integers is %d.\n", SumXYZ); //add the three integers together and display them.
    system("pause");
    
    return 0;
}                                       //End of program.