#include<stdio.h>
#include<string.h>

struct student 
{
    int roll;
    char name[10];
    float marks;
};

void topper(struct student s[4]);   // function declaration

int main ()
{
    struct student s[4];

    // Input data
    for (int i = 0; i < 4; i++)
    {
        printf("\nEnter details of student %d\n", i+1);

        printf("Enter roll: ");
        scanf("%d", &s[i].roll);

        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    topper(s);   // function call 

    return 0;
}

void topper(struct student s[4])
{
    float max = s[0].marks;   // correct type
    int index = 0;            // initialize

    for (int i = 1; i < 4; i++)
    {
        if (s[i].marks > max)  // change only sign to find minimum ...
        {
            max = s[i].marks;
            index = i;
        }
    }

    // Print topper details
    printf("\nTopper Student Details:\n");
    printf("Name: %s\n", s[index].name);
    printf("Roll: %d\n", s[index].roll);
    printf("Marks: %.2f\n", s[index].marks);
}