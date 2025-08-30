#include <stdio.h>
#include <conio.h>

void main()
{
    clrscr();   // clear screen

    float kgs, grams;

    printf("Enter weight in kilograms: ");
    scanf("%f", &kgs);

    grams = kgs * 1000;

    printf("%.2f kilograms = %.2f grams", kgs, grams);

    getch();   // wait for key press
}