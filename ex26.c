#include <stdio.h>

int calcolo(int n)
{
    int nsave;
    nsave = n;
    n = n-1;
    while(n>=1)
    {      
        nsave = nsave * n;
        n = n -1;
    }
    return(nsave);
}


int main()
{
    int n;
    printf("Inserisci un numero\n");
    scanf(" %d", &n);
    printf("Risultato: %d\n", calcolo(n));
}