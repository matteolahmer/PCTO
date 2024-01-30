#include <stdio.h>

int main()
{
    int n1;
    int x = 2;
    int divisori = 0;

    printf("Inserisci un numero:\n");
    scanf(" %d", &n1);
    while(x < n1)
    {
        if (n1 % x == 0)
        {
            divisori = divisori + 1;
        }
        x = x + 1;
        
    }
    if (divisori == 0)
    {
        printf("E' un numero primo\n");        
    }
    else
    {
        printf("Non è un numero primo\n");
    }
}