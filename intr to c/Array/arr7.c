#include<stdio.h>
int main ()
{
    int f=0;
    int arr[5]={9,8,34,11,90};
    int num = 99;
    for (int i=0;i<5;i++)
    {
        if (arr[i]==num)
        {
            printf("%d found at %dth index", num,i);
        }
    }
    if (f==0)
    {
        printf("element not found");
    }

    
}