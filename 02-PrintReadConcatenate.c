#include <stdio.h>
#include <stdlib.h>

void main(){

    //Declaring variables
    int a = 5;
    int b;

    printf("%d", a);

    //Concatenating
    printf("\nThe value of variable a = %d",a);

    //Changing the value of "a"
    a = 15;

    //Concatenating
    printf("\nThe value of variable a = %d\n\n",a);

    //Reading values
    scanf("%d", &b);

    //Concatenating
    printf("The value of variable b = %d\n\n", b);

    //Pausing
    system("pause");
}
