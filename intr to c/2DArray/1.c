#include<stdio.h>
int main ()
{
    int a[2][2]={{1,2},{3,4}};
    for (int r=0; r<2; r++)
      {
        for (int c=0; c<2; c++)
        {
            printf("%d ",a[r][c]);
        }
                    printf("\n");
      }
}