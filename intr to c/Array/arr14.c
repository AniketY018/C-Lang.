#include<stdio.h>
int main ()
{
    int a[5]={1,2,3,4,5};
    int even = 0;
    int odd = 0;

    for (int i=0; i<5; i++)
    {
        if (a[i]%2==0)
        {
            even++;
        }
        else 
        {
            odd++;
        }
    }

    printf("number of even element=%d\n ", even);
     printf("number of odd element=%d\n ", odd);
}