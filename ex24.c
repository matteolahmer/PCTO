#include <stdio.h>

void verifica(int n)
{
    if(n%2 == 0)
    {
        printf("è un numero pari\n");
    }
    else
    {
        printf("è un numero dispari\n");
    }
}


int main()
{
    int n;

    printf("Inserisci un numero:\n");
    scanf(" %d", &n);
    verifica(n);
    return(0);

}