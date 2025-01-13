#include <stdio.h>
#include <stdlib.h>


int mini (int t[], int size)
{
    int min = t[0];
    for (int i = 0; i < size; i++)
    {
        if (t[i] < min)
        {
            min = t[i];
        };
    };
    return min;

};


int imini (int t[], int size)
{
    int i_min = 0;
    for (int i = 0; i < size; i++)
    {
        if (t[i] < t[i_min])
        {
            i_min = i;
        };
    };
    return i_min;
};


int maxi (int t[], int size) 
{
    int max = t[0];
    for (int i = 0; i < size; i++)
    {
        if (t[i] > max)
        {
            max = t[i];
        };
    };
    return max;
};


int imaxi (int t[], int size) 
{
    int i_max = 0;
    for (int i = 0; i < size; i++)
    {
        if (t[i] > t[i_max])
        {
            i_max = i;
        };
    };
    return i_max;
};


int somme(int t[], int size)
{
    int s = 0;
    for (int i = 0; i < size; i++)
    {
        s += t[i];
    };
    return s;
};


int main ()
{
    int t[100];
    int size = 10;

    for (int i = 0; i < size; i++)
    {
        t[i] = rand() % 50;
        printf("t[%d] est %d\n", i, t[i]);
    };

    printf("le minimun de la liste est: %d, et son indice est: %d\n", mini(t, size), imini(t, size));
    printf("le maximum de la liste est: %d, et son indice est: %d\n", maxi(t, size), imaxi(t, size));
    printf("la somme des termes de la liste est: %d", somme(t, size));

};






