#include <stdio.h>
#include <stdlib.h>

 //s2[100];
int main()
{
    char s1[100];
    printf("Enter a sentence\n");
    gets(s1);
    int i=0;
    while (s1[i]!='\0')
    {
        i++;
    }

    printf("number of character is %d", i);

    return 0;
}
