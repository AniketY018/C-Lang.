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
    struct student s[3];
    int num = 1;
    for (int i=0; i<3; i++)
    {
        printf("enter name of student : ");
        scanf("%s",s[i].name);

        printf("enter roll no. of student : ");
        scanf("%d",s[i].roll);

        printf("enter name of student : ");
        scanf("%f",s[i].marks);
    }
      printf("information of all students : ");
      for (int i=0; i<3; i++)
      {
        
      }
    
    }


// Function definition (remove ; after header)
struct student update(struct student s1)
{
    s1.marks = 100;
    s1.roll = 20;
    strcpy(s1.name, "Aniket");
    return s1;
}