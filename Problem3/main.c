/*
Write a C proream to check if the number is odd or even using conditional operator.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,res;
    printf("Enter the Number:");
    scanf("%d", &num);
    printf("\n");
    res=num%2;
    if (res==0)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }
    
    return 0;

}