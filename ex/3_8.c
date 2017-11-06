#include <stdio.h>

int main(void)
{
	int power = 1;
	int x, y;
	int i = 1;

	printf("Type chislo: ");
	scanf("%d", &x);
	printf("Type stepen': ");
	scanf("%d", &y);

	while ( i <= y )	{
		power *= x;
		i++;
	}

	printf("Result is %d\n", power);
	return 0;
}
