#include <stdio.h>

int main()
{
	/* code */
	int a, b, c, result;

	printf( "Enter 3 numbers: " );
	scanf( "%d%d%d", &a, &b, &c );
	printf("\n");
	result = a * b * c;
	printf( "The result of multiplying: %d\n", result );

	return 0;
}