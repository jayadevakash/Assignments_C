/**
 * Write a C program to swap two numbers without using temp or temporary or third variable. 
 */

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a=20, b=30;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%d\n",a);
    printf("b=%d\n",b);
}