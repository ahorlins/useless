#include <stdio.h>

int main()
{
	/* code */
	int a, b, c, avg, sum, mult, small, big;

	printf( "Please, enter 3 numbers: " );
	scanf( "%d%d%d", &a, &b, &c );

	if ( a > b ) && ( a > c )	{
		big = a;
	}
	if ( b > a ) && ( b > c )	{
		big = b;
	}
	if ( c > b ) && ( c > a )	{
		big = c;
	}
	if ( a < b ) && ( a < c )	{
		small = a;
	}
	if ( b < a ) && ( b < c )	{
		small = b;
	}
	if ( c < b ) && ( c < b )	{
		small = c;
	}

	sum = a + b + c;
	avg = ( a + b + c ) / 3;
	mult = a * b * c;

	printf( "Sum is %d\n", sum );
	printf( "Average is %d\n", avg );
	printf( "Product is %d\n", mult );
	printf( "Smallest is %d\n", small );
	printf( "Largest is %d\n", big );
	return 0;
}
