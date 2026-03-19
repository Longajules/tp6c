#include <iostream>

int lire(int tab[20], int j = 0) //cette fonction permet de recupere les valeurs et de les mettre dans un tableau.
{
	int a = 20;

	for (int i = 0; i < 20; i++)
	{
		printf("Entrez valeur (Attention il reste %d element ) :\n", a);
		scanf_s("%d", &tab[i]);
		a--;
		j++;
	}

	return tab[j];
}

int affiche(int tab[20], int j = 0) //cette fonction permet d'afficher les valeurs du tableau.
{

	for (int i = 0; i < 20; i++)
	{
		printf("Element %d : %d\n", i, tab[i]);
	}

	return tab[j];
}

int indice_min(int tab[], int i1, int i2)
{

	if (tab[i1] < tab[i2])
	{
		return i1;
	}
	else return i2;
	

}

int trier(int tab[20], int j = 0)
{
	for (int k = 0; k < 20; k++)
		for (int n = 0; n < 20; n++)
		{
			if (indice_min(tab, n, k) != n) { //cette condition permet de trier les valeurs du tableau du plus grand au plus petit.
				int temp = tab[k];
				tab[k] = tab[n];
				tab[n] = temp;
			}
		}	
	affiche(tab, j);

	return tab[j];
}

int main()
{
	int tab[20];
	int j = 0;
	int i1 = 0;
	int i2 = 0;

	printf("donnez valeur indices 1: ");
	scanf_s("%d", &i1);
	printf("donnez valeur indices 2: ");
	scanf_s("%d", &i2);

	lire(tab, j);
	indice_min(tab, i1, i2);
	trier(tab, j);

	return 0;
}
 