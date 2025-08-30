#include <stdio.h>
#include <conio.h>

void main()
{
    clrscr();   // clear screen

    float grams, kgs;

    printf("Enter weight in grams: ");
    scanf("%f", &grams);

    kgs = grams / 1000;

    printf("%.2f grams = %.2f kilograms", grams, kgs);

    getch();   // wait for key press
}