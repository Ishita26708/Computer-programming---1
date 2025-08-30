#include <stdio.h>
#include <conio.h>

void main()
{
    clrscr();   // clear screen

    int hours, minutes;

    printf("Enter hours: ");
    scanf("%d", &hours);

    minutes = hours * 60;

    printf("%d hours = %d minutes", hours, minutes);

    getch();   // wait for key press
}