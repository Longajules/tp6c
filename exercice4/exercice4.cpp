#include <iostream>

int lire (int tab[20],int j = 0) //cette fonction permet de recupere les valeurs et de les mettre dans un tableau.
{
	int a = 20;

	for(int i = 0; i < 20;i++){
	printf("Entrez valeur (Attention il reste %d element ) :\n", a);
	scanf_s("%d", &tab[i]);
	a--;
	j++;
	}

	return tab[j];
}



int main()
{
	int tab[20];
	int j = 0;

	lire(tab,j);

	return 0;
}
