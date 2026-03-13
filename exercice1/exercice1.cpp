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

int verification(int a)
{
	int resTrois = multipledetrois(a);
	int resSix = multipledesix(a);

	if (resTrois == 0 && resSix == 0)
	{
		//si la valeur de retourne est 2 , alors le nombre est un multiple de 3 et de 6
		return 2;
	}
	else if (resTrois == 0 && resSix != 0)
	{
		//si la valeur de retourne est 1 , alors le nombre est un multiple de 3 mais pas de 6
		return 1;
	}
	else
	{
		//si la valeur de retourne est 0 , alors le nombre n'est pas un multiple de 3 ni de 6
		return 0;
	}
}

int main()
{
	int a = 0;
	int resultat = 0;

	printf("Entrez un nombre entier :\n ");
	scanf_s("%d", &a);

	resultat = verification(a);
	
	if (resultat == 2)
	{
		printf("Le nombre %d est un multiple de 3 et de 6.\n", a);
	}
	else if (resultat == 1)
	{
		printf("Le nombre %d est un multiple de 3 mais pas de 6.\n", a);
	}
	else
	{
		printf("Le nombre %d n'est pas un multiple de 3 ni de 6.\n", a);
	}

	 resultat = multiplededeux(a);

	 if (resultat == 0)
	 {
		 printf("Le nombre %d est pair.\n", a);
	 }
	 else
	 {
		 printf("Le nombre %d est impair.\n", a);
	 }

	return 0;
}