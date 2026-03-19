#include<stdio.h>
int main ()
{
    int a[2][2]; // declaring matrix
    int b[2][2];
    int d[2][2];


       printf("enter second matrix elements :\n");

    for (int r = 0; r < 2; r++)
    {
        for (int c = 0; c < 2; c++)
        {
            scanf("%d ", &b[r][c]);
        }
       
    }

    for (int r = 0; r < 2; r++)
    {
        for (int c = 0; c < 2; c++)
        {
            d[r][c]=a[r][c] + b[r][c]; // addition of both matrix  (ONLY CHANGE SIGN FOR SUBTRACTION)
        }
    }

     printf("addition of 2 array is:\n");
    for (int r = 0; r < 2; r++)
    {
        for (int c = 0; c < 2; c++)
        {
            printf("%d ", d[r][c]);
        }
        printf("\n");
    }

    return 0 ;

}