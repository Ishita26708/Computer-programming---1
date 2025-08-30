#include <stdio.h>
#include <conio.h>

void main()
{
    clrscr();   // clear screen

    float P, N, R, I;

    printf("Enter Principal amount (P): ");
    scanf("%f", &P);

    printf("Enter Time in years (N): ");
    scanf("%f", &N);

    printf("Enter Rate of interest (R): ");
    scanf("%f", &R);

    I = (P * N * R) / 100;

    printf("Simple Interest = %.2f", I);

    getch();   // wait for key press
}