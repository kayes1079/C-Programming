#include <stdio.h>
#include <stdlib.h>

char ch[100];
int main()
{
    printf("Enter a sentence\n");
    gets(ch);
    int space=0, word=0, i;
    for(i=0; ch[i]!='\0'; i++)
    {
        if (ch[i]==' ' && ch[i+1]!=' ')
            space++;
    }
    word=space+1;
    printf("Number of word= %d", word);
    return 0;
}
