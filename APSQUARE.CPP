#include <stdio.h>
#include <conio.h>

void main()
{
    clrscr();   // clear screen

    float L, A, P;

    printf("Enter the length of the square: ");
    scanf("%f", &L);

    A = L * L;       // Area
    P = 4 * L;       // Perimeter

    printf("Area of Square = %.2f", A);
    printf("\nPerimeter of Square = %.2f", P);

    getch();   // wait for key press
}