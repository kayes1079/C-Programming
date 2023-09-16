#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i, N,sum,a[100];
   float avg;
   sum=0;
   printf("enter how many numbers?\n");
   scanf("%d",&N);
   for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<N;i++)
    {
        sum=sum+a[i];

    }
    avg=(sum/N);
         0;
    printf("the avg is:%f",avg);
    return 0;
}
