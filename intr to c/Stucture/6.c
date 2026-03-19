// struture with parameter passing 

#include<stdio.h>
#include<string.h>

struct student 
{
    int roll;
    char name[10];
    int marks;
};

struct student input(struct student);   // function declaration

int main ()
{
    struct student s2;   // declare variable

    struct student p1 = input(s2);   // function call , copy of s2 goes into s1 here

    printf("name of student is: %s\n", p1.name);
    printf("roll no. of student is: %d\n", p1.roll);
    printf("marks of student is: %d\n", p1.marks);
}

struct student input(struct student s1)
{
    s1.marks = 99;
    s1.roll = 3;
    strcpy(s1.name, "Aniket");   

    return s1;   
}