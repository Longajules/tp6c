#include <stdio.h>
#include <string.h>

int minusculaMajuscule(char c[200])
{
    int r = 0;

    printf("Ecris une phrase :\n");
    fgets(c, 200, stdin);

    int i = strlen(c);

    for (int j = 0; j < i; j++)  // plus de ; ici
    {
        if (c[j] >= 'a' && c[j] <= 'z')
        {
            c[j] = c[j] - ('a' - 'A');
            r++;
        }
    }

    return r;  // un seul return
}

int main()
{
    char c[200];
    int r = 0;

    r = minusculaMajuscule(c);          // récupère le retour
    printf("La phrase en majuscule est : %s\n", c);   // %s pour une chaîne
    printf("Le nombre de lettres converties est : %d\n", r);
}