/**
 * Write a C program to checks whether an input alphabet is a vowel or not, using switch case. Both lower-case
 * and upper-case are checked.
 */
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char input = '0';
    printf("Input:");
    scanf("%c", &input);
    switch (input)
    {

    case 'a':
    case 'A':
        printf("Vowel");
        break;
    
    case 'e':
    case 'E':
        printf("Vowel");
        break;
    
    case 'i':
    case 'I':
        printf("Vowel");
        break;
    
    case 'o':
    case 'O':
        printf("Vowel");
        break;

    case 'u':
    case 'U':
        printf("Vowel");
        break;
    
    default:
        printf("Not vowel");
        break;
    }

}