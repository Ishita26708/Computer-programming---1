#include <stdio.h>
#include <conio.h>

void main()
{
    clrscr();   // clear screen

    float dollars, rupees;

    printf("Enter amount in dollars: ");
    scanf("%f", &dollars);

    rupees = dollars * 48;

    printf("%.2f Dollar(s) = %.2f Rupees", dollars, rupees);

    getch();   // wait for key press
}