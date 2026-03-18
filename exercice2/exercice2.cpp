#include <iostream>
#include <conio.h>

void mot_de_passe(char tab[200])
{
    char c;
    int i = 0;

    do
    {
        c = _getch();        // lit un caractère sans l'afficher
        if (c != 13)         // si ce n'est pas Entrée
        {
            printf("*");     // affiche une étoile
            tab[i++] = c;    // stocke le caractère
        }
    } while (c != 13);         // boucle jusqu'à Entrée

    tab[i] = '\0';           // FIN DE CHAÎNE OBLIGATOIRE
}

int main()
{
    char tab[200];

    mot_de_passe(tab);   //on passe le tableau correctement

    printf("\nLe mot de passe est : %s\n", tab);

    return 0;
}