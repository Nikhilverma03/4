//Write a program to print squares of the first 10 natural numbers


#include<stdio.h>
int main()
{
    int i=1,a;
    while(i<=10)
    {
        a=i*i;
        printf("Sqaure of %d is= %d\n",i,a);
        i++;
    }
    return 0;
}

