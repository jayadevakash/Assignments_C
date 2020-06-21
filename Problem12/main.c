/**
 * Write a C program to add two matrix. Assume number of rows and columns of both matrix are same.
 */
#include<stdio.h>

int main()
{
    int i=0,j=0,x=0,y=0,matrix_1[i][j],matrix_2[i][j];
    printf("Enter the Number of Columns:");
    scanf("%d", &x);
    printf("Enter the Number of Rows:");
    scanf("%d", &y);
    for ( i = 0; i < x; i++)
    {
        for ( j = 0; j < y; j++)
        {
            printf("Enter the Matrix[%d][%d]:",i,j);
            scanf("%d", &matrix_1[i][j]);
        }
            
    }
    //printf("%d", matrix_1[1][1]);
    
    for ( i = 0; i < x; i++)
    {
        for ( j = 0; j < y; j++)
        {
            printf("matrix_1[%d][%d]=%d", i,j,matrix_1[i][j]);
            if (j==3)
            {
                printf("\n");
            }
            
        }
            
    }
    

}
