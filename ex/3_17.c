#include <stdio.h>

int main(int argc, char const *argv[])
{
	int way;
	int i = 1;
	int check = 1;
	float zapravka, rashod, avgZapravka;
	float result = 0;
	
	
	
	while ( check != 0 )	{
		printf("Vvedite rashod (-1 for end): ");
		scanf("%f", &rashod);
		
		if ( rashod = -1)
			check = 0;
		
		while ( rashod != -1 )	{
			printf("Пройденный путь: ");
			scanf("%d", &way);
		
			zapravka = (float) way / rashod;
		
			printf("Nuzhno zapravit': %.2f\n\n", zapravka);
		
			result += zapravka;
			i++;
		}
	}

	avgZapravka = result / (float) i;
	printf("Average chislo mile/galon: %.2f\n", avgZapravka);
	
	return 0;
}
