#include<stdio.h>
#include<string.h>

// Structure definition
struct student 
{
    int roll;
    char name[10];
    float marks;
};

// Function declaration
struct student update(struct student s1);

int main ()
{
   // Correct initialization
   struct student s1 = {10, "abc", 99};

   struct student s2 = update(s1); // function call

   // Print updated values (use s2, not s1)
   printf("roll no. is : %d\n", s2.roll);
   printf("name is : %s\n", s2.name);
   printf("marks are : %f\n", s2.marks);

   return 0;
}

// Function definition (remove ; after header)
struct student update(struct student s1)
{
    s1.marks = 100;
    s1.roll = 20;
    strcpy(s1.name, "Aniket");
    return s1;
}