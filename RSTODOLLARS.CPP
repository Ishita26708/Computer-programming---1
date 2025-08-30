#include <stdio.h>
#include <conio.h>

void main()
{
    clrscr();   // clear screen

    float rupees, dollars;

    printf("Enter amount in Rupees: ");
    scanf("%f", &rupees);

    dollars = rupees / 48;

    printf("%.2f Rupees = %.2f Dollar(s)", rupees, dollars);

    getch();   // wait for key press
}