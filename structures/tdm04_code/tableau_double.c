#include "tableau_double.h"

tableau_double nouveau_tableau(int m) {
	tableau_double tbl = {NULL, 0, 0};
	if (m>0) {
		redim_tableau(&tbl, m);
	}
	return tbl;
}

void redim_tableau(tableau_double * tbl, int m) {
	if (m<=0) {
		return;
	}

	double* nv = (double*) malloc(m*sizeof(double));
	if (nv == NULL) {
    printf("oups il semblerait qu'il y ai eu une petite erreur lors de l'allocation de la mémoire, veuillez rééssayer l'opération");
    return;
	}

	for (int i=0; i<tbl->n; i++)
    {
        nv[i] = tbl->t[i];
    }

	if (m>tbl->n)
		for (int i=tbl->n; i < m; i++)
		{
			nv[i] = 0;
		}
	
	free(tbl->t);
	tbl->t = nv;
	tbl->m = m;
}

void inserer_tableau(tableau_double * tbl, int pos, double el) {
	if (pos<0 || pos > tbl->n) {
		printf("indice out of range !");
		return;
	}

	if (tbl->n + 1 >= tbl->m) {
		redim_tableau(tbl, tbl->m + 1);
	}

	for (int i = tbl->n; i >= pos + 1; i--) {
		tbl->t[i] = tbl->t[i-1];
	}

	tbl->t[pos] = el;
	tbl->n++;
}

double supprimer_tableau(tableau_double * tbl, int pos) {
	// A ecrire
	tbl->t[pos] = 0;
	return 0;
}

void liberer_tableau(tableau_double* tbl) {
	free(tbl->t);
	tbl->t = NULL;
	tbl->n = tbl->m = 0;
}

int main() {
	tableau_double tab = nouveau_tableau(5);
	for (int i=0; i<2; i++) {
		tab.t[i] = 1;
	}
	tab.n = 2;
	printf("%d est la capacité du tableau\n", tab.m);
	printf("%d est le nombre d'éléments insérés dans le tableau\n", tab.n);
	printf("voici le tableau: \n");
	for (int i = 0; i < tab.m; i++)
	{
		printf("l'élément numéro %d du tableau est : %f\n",i,tab.t[i]);
	}
	return 0;
}