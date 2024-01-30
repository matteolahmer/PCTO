#include <stdio.h>

int main()
{
    int n1;
    int x = 1;

    printf("Inserisci un numero:\n");
    scanf(" %d", &n1);
    while(n1 > 0)
    {   
        x = x * n1;
        n1 = n1 - 1;  
    }
    printf("%d\n", x);
}