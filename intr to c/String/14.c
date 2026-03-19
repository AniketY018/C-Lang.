#include<stdio.h>
#include<string.h>

int main ()
{
    char str1[] = "Techno--123Pune";

    int i = 0;
    int a = 0;
    int num = 0;
    int ss = 0;

    printf("%s\n", str1);

    while (str1[i] != '\0')
    {
        if (str1[i] >= 'a' && str1[i] <= 'z' || str1[i] >= 'A' && str1[i] <= 'Z')
        {
            a++;
        }
        else if (str1[i] >= '0' && str1[i] <= '9')
        {
            num++;
        }
        else
        {
            ss++;
        }
        i++;
    }

    printf("number count is : %d\n", num);
    printf("special symbol count is : %d\n", ss);
    printf("alphabet count is : %d\n", a);
}