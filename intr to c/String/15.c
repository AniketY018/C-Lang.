#include<stdio.h>
#include<string.h>

int main ()
{
    char str1[] = "Techno--123Pune";

    int i = 0;
    int v_c = 0;
    int con_c = 0;

    printf("%s\n", str1);

    while (str1[i] != '\0')
    {
        if (str1[i] == 'a' || str1[i] == 'e' || str1[i] == 'i' || str1[i] == 'o' || str1[i] == 'u' || str1[i] == 'A' || str1[i] == 'E' || str1[i] == 'I' || str1[i] == 'O' || str1[i] == 'U'  )
        {
           v_c++;
        }
        
        else
        {
            con_c++;
        }
        i++;
    }

    printf("number of vowel count is : %d\n", v_c);
    printf("number of cohnsonent count is : %d\n", con_c);
}