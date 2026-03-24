#include<stdio.h>

union ID {

    char c ;
    int a;
    int p;
    int v; 
}u;

int main ()
{
    // u.c = "a";
    u.p = 1234;
    u.v = 87658;
    printf("%d",u.p);
}