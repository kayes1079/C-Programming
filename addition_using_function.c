#include<stdio.h>

int Add( int x, int y )		/// x,y are formal arguments
{
    int z=0;
    z=x+y;
    return z;
}

main()
{
    int a=5,b=10,c=0, x=500, y=700, z=0;
    c=Add(100, 200);      /// Add() returns a value which will be assigned to c
    printf("sum is %d\n", c);

    c=Add(a, b);		/// a,b are actual arguments
    printf("sum is %d\n", c);

    z=Add(x, y);		/// x,y are actual arguments
    printf("sum is %d\n", z);
    return 0;
}    	/// variables x,y,z of Add() are totally different than x,y,z of main() function
