#include <stdio.h>

int main()
{
	int cifra;
	int soucet = 0;
	int i;
	int j;
	int vysledek = 0;
	printf("Zadejte cislo pro ciferny soucet: ");
	scanf_s("%d", &cifra);
	while (cifra > 0)
	{
		i = cifra % 10;
		soucet = soucet + i;
		cifra = cifra / 10;
	}
	while (soucet > 0) {

		j = soucet % 10;
		vysledek = vysledek + j;
		soucet = soucet / 10;
	}
	printf("\n");
	printf("vysledek je %d\n", vysledek);
}