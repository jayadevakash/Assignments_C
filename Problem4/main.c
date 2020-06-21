/**
 * Write a C program to print first 'n' prime numbers
 */
 
 #include<stdio.h>
 #include<stdlib.h>

 int main()
 {
     int n,m,i,res,j;
     
     printf("Enter the n:");
     scanf("%d", &n);
     printf("\n");
    
     
        for (i = 1; i <= n; i++)
        {
            if (i!=1)
            {
                for ( m = i; m >= 1; m--)
                {
                    res=i%m;
                   if(res==0)
                   {
                    if (m==i)
                        {
                            j=i;
                            break;
                        }
                    if (m==1)
                        {
                            //continue;
                            printf("%d", j);
                        }
                        
                   }           
                    //printf("\n %d",res); 
                }
            }
        }
 }

