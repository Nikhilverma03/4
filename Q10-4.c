//Write a program to print a table of 5.

#include<stdio.h>
int main()
{
    int i=1,a;
    while(i<=10)
    {
        a=5*i;
        printf("5 * %d = %d\n",i,a);
        i++;
    }
    return 0;
}

