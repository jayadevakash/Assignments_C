/**
 * Write a C program to find factorial of a given number using for loop. 
 */
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num,cnum,i,a;
    printf("Enter the number:");
    scanf("%d", &num);
    cnum=num;
    for (i=1;i<=num;i++)
    {
        a=cnum-i;
        num=num*a;
        if(a==1)
        {
            break;
        }
    }
    printf("res=%d\n", num);
    


}