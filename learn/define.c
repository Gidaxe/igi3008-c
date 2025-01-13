#include <stdio.h>

int main () 
{
    int y[] = {6, 5, 4};
    int z[10];
    for (int i = 0; i < 10; i++)
    {
        z[i] = i;
    };

    printf(" %d, %d\n", y[2], z[1]);
}