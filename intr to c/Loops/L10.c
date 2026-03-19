#include <stdio.h>

int main() {
    int num = 2371;
    int rev=0;
    int org = num;

    while (num > 0) {
        int rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }

    printf("Reversed number: %d\n", rev);

    if (org == rev) {
        printf("The number is a palindrome.\n");
    } else {
        printf("The number is not a palindrome.\n");
    }

    return 0;
}