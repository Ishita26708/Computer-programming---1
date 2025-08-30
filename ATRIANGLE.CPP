#include <stdio.h>
#include <conio.h>

void main()
{
    clrscr();   // clear screen

    float H, L, A;

    printf("Enter the height of the triangle: ");
    scanf("%f", &H);

    printf("Enter the base length of the triangle: ");
    scanf("%f", &L);

    A = (H * L) / 2;   // Area formula

    printf("Area of Triangle = %.2f", A);

    getch();   // wait for key press
}