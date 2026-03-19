#include<stdio.h>

int main()
{
    int sum=0;
    int num=28;

    for(int i=1;i<num;i++)
    {
        if (num%i==0)
        {
            sum=sum+i;
        }
    }

    if (num==sum)
    {
        printf("%d is a perfect number:", num);
    }
    else{
        printf("%d is not a perfect number:",num);
    }
}