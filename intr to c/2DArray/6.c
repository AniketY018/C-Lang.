// write a code for Transpose of matrix 

#include <stdio.h>
int main ()
{
   int a[3][3];
   int t[3][3];

   // Input matrix 

   printf("enter the elements of matrix:\n");

    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            scanf("%d", &a[r][c]); 
        }
    }
  
    // Transpose of matrix
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            t[c][r] = a[r][c]; // replace [r][c] position
        }
    }


    // Printing transpose of matrix
    printf("transpose of matrix:\n");

    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            printf("%d ", t[r][c]); 
        }

        printf("\n");
    }

}