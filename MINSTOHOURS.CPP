#include <stdio.h>
#include <conio.h>

void main()
{
    clrscr();   // clear screen

    int minutes, hours, remaining;

    printf("Enter minutes: ");
    scanf("%d", &minutes);

    hours = minutes / 60;          // full hours
    remaining = minutes % 60;      // leftover minutes

    printf("%d minutes = %d hour(s) and %d minute(s)", minutes, hours, remaining);

    getch();   // wait for key press
}