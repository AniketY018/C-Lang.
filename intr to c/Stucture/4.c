#include<stdio.h>
#include<string.h>   // for strcpy

struct student 
{
    int roll;
    char name[10];
    int marks;
}s1;

void output(struct student p1, struct student p2);  // function declaration

int main ()
{
    struct student s1 = {10, "Aniket", 99};  
    struct student s2;

    s2.marks = 89;
    s2.roll = 2;
    strcpy(s2.name, "tejas");   // fixed function name

    output(s1, s2);   // pass both arguments
}

void output(struct student p1, struct student p2)
{
    printf("name of student is: %s\n", p1.name);
    printf("roll no. of student is: %d\n", p1.roll);
    printf("marks of student is: %d\n\n", p1.marks);

    printf("name of student is: %s\n", p2.name);
    printf("roll no. of student is: %d\n", p2.roll);
    printf("marks of student is: %d\n", p2.marks);
}