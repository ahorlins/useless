#include <stdio.h>

int main()
{
	int a, max, min;

	/* int 6, 3, 8, 1, 4 
	       a, b, c, d, e */

	printf( "Input numbers: ");
	scanf( "%d", &a);
	min = max = a;
	if ( a > max )	{
		max = a;
	}
	if ( a < min )	{
		min = a;
	}
	scanf( "%d", &a);
	if ( a > max )	{
		max = a;
	}
	if ( a < min )	{
		min = a;
	}
	scanf( "%d", &a);
	if ( a > max )	{
		max = a;
	}
	if ( a < min )	{
		min = a;
	}
	scanf( "%d", &a);
	if ( a > max )	{
		max = a;
	}
	if ( a < min )	{
		min = a;
	}
	scanf( "%d", &a);
	if ( a > max )	{
		max = a;
	}
	if ( a < min )	{
		min = a;
	}

	printf( "max is %d \n", max );	
	printf( "min is %d \n", min );

	return 0;
}
