#include <stdio.h>
#include <conio.h>

void main()
{
    clrscr();   // clear screen

    float bytes, kb, mb, gb;

    printf("Enter size in Bytes: ");
    scanf("%f", &bytes);

    kb = bytes / 1024;
    mb = bytes / (1024 * 1024);
    gb = bytes / (1024 * 1024 * 1024);

    printf("\n%.2f Bytes = %.2f KB", bytes, kb);
    printf("\n%.2f Bytes = %.6f MB", bytes, mb);
    printf("\n%.2f Bytes = %.9f GB", bytes, gb);

    getch();   // wait for key press
}