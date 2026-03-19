#include<stdio.h>

int max(int a, int b)
{
    if (a > b) {
        return a;
    }
    else {
        return b;
    }
}

int main()
{
    int a = 200;
    int b = 99;
    
    printf("The greater number is %d\n", max(a,b));

    return 0;
}
