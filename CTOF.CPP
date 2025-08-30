#include <stdio.h>
#include <conio.h>

void main()
{
    clrscr();   // clear screen

    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (9.0 / 5.0 * celsius) + 32;

    printf("%.2f Celsius = %.2f Fahrenheit", celsius, fahrenheit);

    getch();   // wait for key press
}