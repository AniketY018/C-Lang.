#include<stdio.h>

int main()
{
    int a[10] = {1,2,3,4,5,6,7,8,9,0};
    int even_c = 0;
    int odd_c = 0;

    for(int i = 0; i < 10; i++)
    {
        if(a[i] % 2 == 0)
        {
            even_c++;
        }
        else
        {
            odd_c++;
        }
    }

    printf("Total even elements = %d\n", even_c);
    printf("Total odd elements = %d\n", odd_c);

    return 0;
}