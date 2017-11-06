#include <stdio.h>

int main(int argc, char const *argv[])
{
	unsigned int way;
	int i = 1;
	float zapravka, result, rashod, avgZapravka;

	printf("Vvedite rashod (-1 for end): ");
	scanf("%f", &rashod);
	
	while ( rashod != -1 )	{
		printf("Пройденный путь: ");
		scanf("%d", &way);
		zapravka = (float) way / rashod;
		printf("Nuzhno zapravit': %.2f\n", zapravka);
		
		result += zapravka;
		i++;
	}

	avgZapravka = result / i;
	printf("Average chislo mile/galon: %.2f\n", avgZapravka);
	
	return 0;
}