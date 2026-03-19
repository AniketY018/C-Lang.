// SMALL TO CAPITAL

#include<stdio.h>
#include<string.h>

int main ()
{
    char str1[20] = "technopune";

    int i = 0;
    while (str1[i] != '\0')
    {
      
      printf("%c", str1[i] - 32);   // use of ASCII value (97-32 = 65) (a - 32 = A )
      i++;

    }

}


// capital to small 

#include<stdio.h>
#include<string.h>

int main ()
{
    char str1[20] = "TECHNOPUNE";

    int i = 0;
    while (str1[i] != '\0')
    {
      
      printf("%c", str1[i] + 32);   // use of ASCII value (65+32 = 97) (A + 32 = a)
      i++;

    }

}