#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    char name[ ] ="ABCD";
    int i=0;
    while (name [i]!= '\0')
    {
        if(name [i]>='A'&& name[i]<='z')
        name[i]+=32;
        i++;
    }
    printf("original string = %s",name);
    printf("length= %d\n",i);
}
