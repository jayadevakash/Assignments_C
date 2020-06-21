/*

Write a C Program to accept 2 numers from users for addition & ask user if he wants to repeat the addition with other numbers.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,result;
    char decission='N';
    
    do
    {
    printf("Enter the NUM1:");
    scanf("%d", &num1);
    printf("\n");
    printf("Enter the NUM2:");
    scanf("%d", &num2);
    printf("\n");
    result=num1+num2;
    printf("RESULT:%d", result);
    printf("\n");
    printf("DO you want to do this again?(Y/N)");
    scanf("%s", &decission);
    } while (decission == 'Y'|| decission == 'y');
    
    



}