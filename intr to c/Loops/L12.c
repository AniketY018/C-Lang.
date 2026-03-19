#include<stdio.h>

int main(){
    int fact =1;
    int num = 1;

    while (num<=5)
    {
        fact =fact* num;
        num++;
    }

    printf("factorail of 5 is : %d",fact);
}