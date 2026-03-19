#include<stdio.h>
#include<string.h>

struct info {
    float marks;
    char name[10];
    int sal;
};

int main ()
{
    struct info s[3];

    for (int i = 0; i < 3 ; i++)
    {
        printf("Enter name %d: ", i+1);
        scanf("%s", s[i].name);

        printf("Enter marks %d: ", i+1);
        scanf("%f", &s[i].marks);

        printf("Enter salary %d: ", i+1);
        scanf("%d", &s[i].sal);
    }

    printf("\nUpdated Data:\n");

    for (int i = 0; i < 3 ; i++)
    {
        printf("\nStudent %d\n", i+1);
        printf("Name: %s\n", s[i].name);
        printf("Marks: %f\n", s[i].marks);
        printf("Salary: %d\n", s[i].sal);
    }

    return 0;
}