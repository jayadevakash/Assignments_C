/**
 * Write a C program to find maximum or largest element present in an array and prints the location or index at
 * which maximum element occurs in array.
 */ 

#include<stdio.h>
#include<stdlib.h>

int main()
{
    
    int small,j,large,i,x,elem[x];
    printf("Enter the array size");
    scanf("%d", &x);
    for (j = 0;j < x; j++)
    {
    printf("Enter the Elements");
    scanf("%d", &elem[j]);
    }
    small=large=elem[0];
    for ( i = 0; i < x; i++)
    {
        if (elem[i]>large)
        {
            large=elem[i]; 
        }
        
    }
    printf("%d", large);
}