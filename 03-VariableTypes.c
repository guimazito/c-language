#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main(){

    //Defining variables
    int a;
    float b;
    char c;
    bool d;

    //Assigning values
    a = 5;
    b = 2.3;
    c = 'a';
    d = true;//true = 1 , false = 0

    //Printing on screen
    printf("\nThe value of a = %d", a);
    printf("\nThe value of b = %.1f", b);
    printf("\nThe value of c = %c", c);
    printf("\nThe value of d = %d\n", d);

    //Reading values
    scanf("%d", &a);
    scanf("%f", &b);
    scanf(" %c", &c);
    scanf("%d", &d);

    //Printing on screen
    printf("\nThe value of a = %d", a);
    printf("\nThe value of b = %.1f", b);
    printf("\nThe value of c = %c", c);
    printf("\nThe value of d = %d\n", d);

    //Pausing
    system("pause");
}
