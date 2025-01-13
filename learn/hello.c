#include <stdio.h>
#include <stdlib.h>

void init(int* tableau, int n)
{
    for (int i=0; i<n; i++)
    {
        tableau[i] = (i+1)*(i+1);
    };
    /* 
    On en met pas de return tableau pck le tableau initial a ete créé dans la pile, 
    donc l'allocation de la mémoire est faite automatiquement et est aussi vidée 
    automatiquement à la fin de l'exécution de la fonction et les changements réalisés 
    à la mémoire sont éffacés.
    */
}

int* allouer(int n)
{
    int* tableau = (int*) malloc(n*sizeof(int));
    for (int i=0; i<n; i++)
    {
        tableau[i] = (i+1)*(i+1);
    }
    /*
    On peut se permetre de retourner un tableau pck ici on a alloué manuellement l'espace 
    mémoire, les données sont stockés dans le tas et devront etre vidées manuellement avec
    free(tableau).
    */
   return tableau;
}

void afficher(int* tableau, int taille)
{
    for (int i = 0; i < taille; i++)
    {
        printf("%d\n", tableau[i]);
    }
}

int main() 
{
    int n = 10;
    int t[n];
    int* tabl = allouer(n+1);
    init(t, n);
    //printf("%d\n", *(t+1));
    afficher(t, n);
    printf("\n\n\n");
    afficher(tabl, n+1);
    free(tabl);
}