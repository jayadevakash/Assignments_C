/**
 * Write a C program to check if the number is odd or even without using bit-wise or modulus operator.
 */ 

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,st;
    printf("Enter the Number:");
    scanf("%d", &num);
    while (num>=0)
    {
        st=num-2;
        num=st;
    }
    if (num==-1)
    {
        printf("ODD");
    }
    else
    {
        printf("EVEN");
    }
    
    
    
}