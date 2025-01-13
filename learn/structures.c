#include <stdio.h>

typedef struct {
    int len;
    int* tab;
} Tab;


void affichage(Tab* tableau) {
    for (int i; i < tableau->len; i++) {
        printf("%i \n", tableau->tab[i]);
    };
}


int main() {
    int t[] = {1,2,3};
    Tab tabl = {3, &t[0]};
    affichage(&tabl);
}