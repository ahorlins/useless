#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a, b;

	printf( "Type a number: " );
	scanf( "%d", &a );

	b = a % 2;

	if ( b == 0 )	{
		printf( "ezChetnoe\n" );
	}
	if ( b != 0)	{
		printf("ezNeChetnoe\n");
	}

	return 0;
}