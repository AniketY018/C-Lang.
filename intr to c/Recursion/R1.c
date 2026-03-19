#include <stdio.h>

int digitsum(int n) 
{
    if (n == 0) 
        return 0;
    else 
        return (n % 10) + digitsum(n / 10); 
} 

int main() 
{
    int num = 123; 
    printf("Sum of digits: %d", digitsum(num));
    return 0; 
}