/**
 * Write a C program to check if a given number is palindrome or not.
 */ 

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num=0,last=0,rev=0,temp=0;
    printf("Enter the number:");
    scanf("%d", &num);
    temp=num;

    
    /*REVERSE THE NUMBER*/
    do
    {
        /*Isolate the last digit*/
        last=num%10;

        /*Append last digit to reverse*/
        rev=(rev*10)+last;

        /*Remove the last digit from the number*/
        num=num/10;
    } while (num>0);
    
    if (temp==rev)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    
    

    
}