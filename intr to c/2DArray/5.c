#include<stdio.h>
int main ()
{
    int a[3][3]; 
    int flag = 1; 

    printf("Enter matrix elements:\n");

    // Input matrix
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            scanf("%d", &a[r][c]); 
        }
    }

    // Check identity matrix
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            if(r == c && a[r][c] != 1) 
            {
                if(r!=c && a[r][c]!=0)
            }

            if(r != c && a[r][c] != 0)  
            {
                flag = 0;
            }
        }
    }

    if(flag == 1) 



        printf("Matrix is Identity Matrix");
    else
        printf("Matrix is NOT Identity Matrix");

    return 0;
}