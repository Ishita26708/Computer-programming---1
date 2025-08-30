#include <stdio.h>
#include <conio.h>

void main()
{
    clrscr();   // clear screen

    float celsius, fahrenheit;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = 5.0 / 9.0 * (fahrenheit - 32);

    printf("%.2f Fahrenheit = %.2f Celsius", fahrenheit, celsius);

    getch();   // wait for key press
}