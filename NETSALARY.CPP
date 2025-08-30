#include <stdio.h>
#include <conio.h>

void main()
{
    clrscr();   // clear screen

    float gross, allowance, deduction, net;

    printf("Enter Gross Salary: ");
    scanf("%f", &gross);

    allowance = (10.0 / 100.0) * gross;   // 10% allowance
    deduction = (3.0 / 100.0) * gross;    // 3% deduction

    net = gross + allowance - deduction;

    printf("Gross Salary = %.2f", gross);
    printf("\nAllowance (10%%) = %.2f", allowance);
    printf("\nDeduction (3%%) = %.2f", deduction);
    printf("\nNet Salary = %.2f", net);

    getch();   // wait for key press
}