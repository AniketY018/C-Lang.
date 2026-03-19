#include<stdio.h>

int main() {

    int i = 1;

    do {
        printf("7 x %d = %d\n", i, 7 * i);
        i++;

    } while (i <= 10);

    return 0;
}