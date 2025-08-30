#include <stdio.h>
#include <conio.h>

void main()
{
    clrscr();   // clear screen

    float a, b, div;

    printf("Enter the value of a: ");
    scanf("%f", &a);

    printf("Enter the value of b: ");
    scanf("%f", &b);

    if(b == 0)
    {
        printf("Division by zero is not allowed!");
    }
    else
    {
        div = a / b;
        printf("Division of %.2f / %.2f = %.2f", a, b, div);
    }

    getch();   // wait for key press
}
