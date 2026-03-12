#include <iostream>

int multipledetrois(int a) //permet de determiner si un nombre est un multiple de 3.
{
	int result = 0;
	
	result = a % 3;

	return result == 0;
}

int multiplededeux(int a) //permet de determiner si un nombre est un multiple de 2.
{
	int result = 0;

	result = a % 2;

	return result;
}

int main()
{
	int a = 0;
	int resultat = 0;

	scanf_s("%d", &a);

	resultat = multipledetrois(a);

	if (resultat == 0)
	{
		printf("Le nombre est un multiple de 3.");
	}
	else if (resultat != 0)
	{
		resultat = multiplededeux(a);
	}
	else if (resultat == 0)
	{
		printf("Le nombre est un multiple de 2.");
	}
	else
	{
		printf("Le nombre n'est pas un multiple de 2 ou de 3.");
	}
	
	return 0;
}