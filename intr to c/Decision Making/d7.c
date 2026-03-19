#include <stdio.h>

int main() {
    int marks, attendance;

    printf("Enter marks: ");
    scanf("%d", &marks);

    printf("Enter attendance percentage: ");
    scanf("%d", &attendance);

    if (marks > 80) {
        if (attendance > 90) {
            printf("eligible for scholarship.");
        }
        else {
            printf("Not eligible, attendance is below 90%%.");
        }
    }
    else {
        printf("Not eligible, marks are below 80.");
    }

    return 0;
}