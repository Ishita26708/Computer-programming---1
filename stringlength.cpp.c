#include<stdio.h>
#include<conio.h>
int main()
{
    char name[ ] ="PDEU";
    int i=0;
    while (name [i]!= '\0')
    {
        i++;
    }
    printf("Original string:%s\n",name);
    printf("length= %d\n",i);
}
