#include<stdio.h>

int main ()
{
    char string1[20] = "Techno Script";
  
    char *str = string1;
    
    int count =0;
    int f=0;

    while (*str != '\0')
    {
        
        count++;
        str++;
    }
    printf("count is : %d\n",count);

    char *start = string1;
    char *end = string1 + count-1;
    while (start < end)
    {
        char temp = *start;
        *start = *end;
        *end =temp;
        start++;
        end--;
    }
    printf("\n%s",string1);
}