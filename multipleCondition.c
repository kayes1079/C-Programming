#include<stdio.h>

main()
{
    int num1, num2;
    printf("Enter numbers:\n");
    scanf("%d %d",&num1,&num2);

    if(num1<num2)
    {
        printf("%d < %d",num1,num2);
    }
    else if(num1>num2)
    {
       printf("%d > %d",num1,num2);
    }
    else
        printf("%d = %d", num1, num2);

    return 0;
}
