#include <stdio.h>

int main(int argc, char const *argv[])
{
	int power = 1;
	int x, y;
	int i = 1;

	printf("Type chislo: \n");
	scanf("%d", x);
	printf("Type stepen': \n");
	scanf("%d", y);

	while ( i <= y )	{
		power *= x;
		i++;
	}

	printf("Result is %d\n", power);
	return 0;
}
