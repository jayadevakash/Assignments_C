/*

Write a C Program to add the digits of a number.

*/

#include<stdio.h>
#include<string.h>

int main()
{
    int in_data,count;
    char data[1000];
    printf("Enter the numbers:");
    scanf("%s", data);
    count=strlen(data);
    printf("Entered digits%d", count);

}