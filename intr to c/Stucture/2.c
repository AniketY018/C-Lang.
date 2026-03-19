#include<stdio.h>
#include<string.h>   // needed for strcpy

struct detailes{
    float marks;
    char name[10];
    int sal;
}i3;            // i3 is struct variablle / object  

int main ()
{
    struct detailes i3,i4 ; // 

    // i3.marks = 89.60;
    // i3.sal = 950000; 
    // strcpy(i3.name, "Aniket");

    printf("\nEnter marks: ");
    scanf("%f", &i3.marks);  // address is must for integer (&)

    printf("Enter name: ");
    scanf("%s", i3.name);   // not compulsory to take address for stirng

    printf("Enter salary: ");
    scanf("%d", &i3.sal);

    // Printing updated values
        i3.marks = 100;
        strcpy(i3.name,"Tejas");
        i3.sal = 95000; // updated value

        i4 = i3 ;
    printf("\nUpdated Data:\n");
    printf("Marks: %f\n", i3.marks);
    printf("Name: %s\n", i3.name);
    printf("Salary: %d\n", i3.sal);

    printf("\ncopied Data:\n");
    printf("Marks: %f\n", i4.marks);
    printf("Name: %s\n", i4.name);
    printf("Salary: %d\n", i4.sal);

    return 0;
}