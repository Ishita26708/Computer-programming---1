#include <stdio.h>
#include <conio.h>

void main()
{
    clrscr();   // clear screen

    int a, b, temp;

    printf("Enter value of a: ");
    scanf("%d", &a);

    printf("Enter value of b: ");
    scanf("%d", &b);

    // swapping
    temp = a;
    a = b;
    b = temp;

    printf("\nAfter swapping:");
    printf("\na = %d", a);
    printf("\nb =