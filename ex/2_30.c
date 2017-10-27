#include <stdio.h>

int main(int argc, char const *argv[])
{
	int num, a, b, c, d, e;

	printf( "Enter 5-digit number: " );
	scanf( "%d", &num);

	a = num / 10000;
	b = ( num % 10000 ) / 1000;
	c = ( num % 1000 ) / 100;
	d = ( num % 100 ) / 10;
	e = num % 10;

	printf( "%d   %d   %d   %d   %d\n", a, b, c, d, e );

	return 0;
}
