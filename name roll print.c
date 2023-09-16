#include <stdio.h>
#include <stdlib.h>

int main()
{
 int roll;
 char name [100];
 printf("enter name\n");
 gets (name);
 printf("enter roll\n");
 scanf("%d",&roll);
 printf("my name is %s",name);
 printf("\n and roll is %d",roll);
    return 0;
}
