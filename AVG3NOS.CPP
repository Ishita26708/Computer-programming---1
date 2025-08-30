#include <stdio.h>
#include <conio.h>

void main()
{
    clrscr();   // clear screen

    float s1, s2, s3, total, average;

    printf("Enter marks of Subject 1: ");
    scanf("%f", &s1);

    printf("Enter marks of Subject 2: ");
    scanf("%f", &s2);

    printf("Enter marks of Subject 3: ");
    scanf("%f", &s3);

    total = s1 + s2 + s3;
    average = total / 3;

    printf("\nTotal Marks = %.2f", total);
    printf("\nAverage Marks = %.2f", average);

    getch();   // wait for key press
}