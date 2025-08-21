#include <stdio.h>
#include <conio.h>
void main()
{ /* program to subtract 2 nos.*/
  clrscr();
  int a,b,sub;
  printf("Enter the value of a:");
  scanf("%d",&a);
  printf("Enter the value of b:");
  scanf("%d",&b);
  sub = a - b;
  printf("subtraction of %d + %d is %d \n" ,a,b,sub);
  printf("%d - %d = %d\n" ,a,b,sub);
  printf("%d\t%d\t%d",a,b,sub);
  getch();
}
