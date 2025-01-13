#include <stdio.h>

void sumult (int a, int b, int* sum, int* mult) 
{
    *sum = a + b;
    *mult = a * b;
}


int main()
{
    int a = 3;
    int b = 4;
    int sum;
    int mult;
    sumult(a, b, &sum, &mult);
    printf ("%d + %d = %d\n", a, b, sum);
    printf("%d x %d = %d\n", a, b, mult);

}


