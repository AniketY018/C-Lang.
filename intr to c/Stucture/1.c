//   1) Using assignment method

#include<stdio.h>
struct info {

    float marks;
    char name [10];
    int sal;
} i1;

int main ()
{
    // create variable;
    struct info i2;

 i1.marks = 89, 90 ;
 i1.sal = 60000;
//  i1.name = "Aniket" (x) not vaild
strcpy(i1.name,"Aniket");

printf("marks of the first person are : %f\n",i1.marks);
printf("name of the first person is : %s\n",i1.name);
printf("salary of the first person is : %d\n",i1.sal);


}

 // 2) using initilazer list method 


#include<stdio.h>
struct info {

    float marks;
    char name [10];
    int sal;
} i2;

int main ()
{
    struct info i2 = {100, "Aniket", 95000}; // 

    i2.marks = 89.60;
    i2.sal = 950000 ; 

    strcpy(i2.name,"Aniket");


printf("marks of the first person are : %f\n",i2.marks);
printf("name of the first person is : %s\n",i2.name);
printf("salary of the first person is : %d\n",i2.sal);

}


// 3)  using user input method 


#include<stdio.h>
#include<string.h>   // needed for strcpy

struct info {
    float marks;
    char name[10];
    int sal;
};

int main ()
{
    struct info i3 = {100, "Aniket", 95000};

    // Updating values
    i3.marks = 89.60;
    i3.sal = 950000; 
    strcpy(i3.name, "Aniket");
   
    // Taking input (FIXED: use & for non-string variables)
    printf("\nEnter marks of 3rd person: ");
    scanf("%f", &i3.marks);

    printf("Enter name of 3rd person: ");
    scanf("%s", i3.name);

    printf("Enter salary of 3rd person: ");
    scanf("%d", &i3.sal);

    // Printing updated values
    printf("\nUpdated Data:\n");
    printf("Marks: %f\n", i3.marks);
    printf("Name: %s\n", i3.name);
    printf("Salary: %d\n", i3.sal);

    return 0;
}
