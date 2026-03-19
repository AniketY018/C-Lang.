// Write a program 

#include<stdio.h>
#include<string.h>   // for strcpy

struct student 
{
    int roll;
    char name[10];
    int marks;
}s1;

struct student input(); // function declaration
int main ()
{
    struct student p1 = input();
     printf("name of student is: %s\n", p1.name);
    printf("roll no. of student is: %d\n", p1.roll);
    printf("marks of student is: %d\n", p1.marks);

}

struct student input ()
{
   struct student s1 = {10, "Aniket", 99};  

    return(s1);   
}