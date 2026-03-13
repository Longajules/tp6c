#include <iostream>

int multipledetrois(int a) //permet de determiner si un nombre est un multiple de 3.
{
	int result = 0;
	
	result = a % 3;

	return result;
}

int multiplededeux(int a) //permet de determiner si un nombre est un multiple de 2.
{
	int result = 0;

	result = a % 2;

	return result;
}

int multipledesix(int a) //permet de determiner si un nombre est un multiple de 6.
{
	int result = 0;

	result = a % 6;
		
	return result;
}

int main()
{
	int a = 0;
	int resultat = 0;

	printf("Entrez un nombre entier :\n ");
	scanf_s("%d", &a);

	resultat = multipledesix(a);
	
	if (resultat == 0 || resultat == 3)
	{
		printf("Le nombre %d est un multiple de 6.\n", a);
	}
	else
	{
		resultat = multiplededeux(a);
	}

	if (resultat == 0)
	{
		printf("Le nombre %d est un multiple de 2.\n", a);
	}
	else
	{
		printf("Le nombre %d n'est pas un multiple de 2 ni un multiple de 3.\n", a);
	}

	return 0;
}