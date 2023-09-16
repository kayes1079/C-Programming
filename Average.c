#include <stdio.h>
//#include <stdlib.h>

int main()
{
    float a,b,c,sum,avg;///variable declaration
    printf("Enter three numbers:\n");
    scanf("%f %f %f",&a, &b, &c);///taking input from user
    sum = a+b+c; /// calculation of sum
    avg =sum/3;///calculation of average
    printf("Average is %f\n",avg);/// printing value of average
    return 0;

}
