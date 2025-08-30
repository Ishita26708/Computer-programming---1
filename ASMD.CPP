#include <stdio.h>
#include <conio.h>

void main()
{
    clrscr();   // clear screen

    float a, b, sum, mul, div;

    printf("Enter the value of a: ");
    scanf("%f", &a);

    printf("Enter the value of b: ");
    scanf("%f", &b);

    sum = a + b;
    mul = a * b;

    if(b == 0)
    {
        printf("\nAddition of %.2f + %.2f = %.2f", a, b, sum);
        printf("\nMultiplication of %.2f * %.2f = %.2f", a, b, mul);
        printf("\nDivision not possible (denominator is zero)");
    }
    else
    {
        div = a / b;
        printf("\nAddition of %.2f + %.2f = %.2f", a, b, sum);
        printf("\nMultiplication of %.2f * %.2f = %.2f", a, b, mul);
        printf("\nDivision of %.2f / %.2f = %.2f", a, b, div);
    }

    getch();   // wait for key press
}