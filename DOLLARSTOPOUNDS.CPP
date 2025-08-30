#include <stdio.h>
#include <conio.h>

void main()
{
    clrscr();   // clear screen

    float dollars, rupees, pounds;

    printf("Enter amount in Dollars: ");
    scanf("%f", &dollars);

    rupees = dollars * 48;
    pounds = rupees / 70;

    printf("%.2f Dollar(s) = %.2f Pound(s)", dollars, pounds);

    getch();   // wait for key press
}