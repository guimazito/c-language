#include <stdio.h>
#include <stdlib.h>

//Main function
void main(){

    //Declaring variables
    int a = 6, b = 3;

    //Sum
    printf("The sum of %d and %d = %d\n", a, b, a + b);

    //Subtraction
    printf("The subtraction of %d and %d = %d\n", a, b, a - b);

    //Division
    printf("The division of %d for %d = %d\n", a, b, a / b);

    //Multiplication
    printf("The multiplication of %d and %d = %d\n", a, b, a * b);

    //Rest of division
    printf("The rest of division between %d and %d = %d\n", a, b, a % b);

    //Absolute value
    printf("The absolute value of -3 = %d\n", abs(-3));

    //Pause
    system("pause");
}
