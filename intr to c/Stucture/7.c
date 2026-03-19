#include<stdio.h>
#include<string.h>

struct student 
{
    int roll;
    char name[10];
    float marks;
};

void search(int num, struct student s[4]);   // function declaration

int main ()
{
    struct student s[4];
    int num;

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

    // Input to search 
    printf("\nEnter roll number to search: ");
    scanf("%d", &num);

    search(num, s);   // function call

}

void search(int num, struct student s[4])
{
    int found = 0;

    for (int i = 0; i < 4; i++)
    {
        if (s[i].roll == num)   // correct comparison
        {
            printf("\nStudent Found!\n");
            printf("Name: %s\n", s[i].name);
            printf("Roll: %d\n", s[i].roll);
            printf("Marks: %f\n", s[i].marks);
            found = 1;
            break;
        }
    }

    // if (found == 0)
    // {
    //     printf("\nStudent not found!\n");
    // }
}