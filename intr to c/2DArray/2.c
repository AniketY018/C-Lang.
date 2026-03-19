#include<stdio.h>
int main ()
{
    int a[2][2];
    printf("enter 4 elements:\n");
    for (int r = 0; r < 2; r++)
      {
        for (int c = 0; c < 2; c++)
        {
            scanf("%d",&a[r][c]);
        }
        
      }
       printf("Array elements are:\n");

    for (int r = 0; r < 2; r++)
    {
        for (int c = 0; c < 2; c++)
        {
            printf("%d ", a[r][c]);
        }
        printf("\n");
    }

    return;

}