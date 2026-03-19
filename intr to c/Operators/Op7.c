#include <stdio.h>

int main() {
    int i = 4, k;

    k = i++;
    printf("k=%d i=%d\n", k, i);

    i = 4;
    k = ++i;
    printf("k=%d i=%d\n", k, i);

    int x = 4, y;
    y = x++ * 10;
    printf("y=%d x=%d\n", y, x);

    x = 5;
    y = ++x * 10;
    printf("y=%d x=%d\n", y, x);

    int p = 9, q;
    q = p-- / 3;
    printf("q=%d p=%d\n", q, p);

    p = 9;
    q = --p / 3;
    printf("q=%d p=%d\n", q, p);

    return 0;
}