#include <stdio.h>

int main() {
    int a=10, b=20, c=30, d;

    d = ++a, ++b, ++c, a+5;
    printf("d=%d a=%d b=%d c=%d\n", d, a, b, c);

    a=10; b=20; c=30;

    d = (++a, ++b, ++c, a+5);
    printf("d=%d a=%d b=%d c=%d\n", d, a, b, c);

    return 0;
}