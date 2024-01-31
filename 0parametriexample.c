#include <stdio.h>

int somma(int a, int b)
{
    int somma;

    somma = a + b;
    return(somma);
}

int main()
{
    int x = 5;
    int y = 7;
    somma(x, y);
    int z = somma(x,y);
    printf("%d\n", z);
}