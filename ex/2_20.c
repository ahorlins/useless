#include <stdio.h>

int	main ()
{
	int r;

	printf( "Enter radius: " );
	scanf( "%d", &r );

	printf( "Diametr %d\n", 2 * r );
	printf( "Plos4ad' %f\n", 3.14159 * (r * r) );
	printf( "Perimetr %f\n", 2 * 3.14159 * r);

	return 0;
}