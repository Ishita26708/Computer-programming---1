#include <stdio.h>
#include <conio.h>

void main()
{
    clrscr();   // clear screen

    float R, A;

    printf("Enter the radius of the circle: ");
    scanf("%f", &R);

    A = (22.0 / 7.0) * R * R;   // Area formula

    printf("Area of Circle = %.2f", A);

    getch();   // wait for key press
}