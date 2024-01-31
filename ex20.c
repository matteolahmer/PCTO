#include <stdio.h>

void calcolo()
{
    int n1;
    int n2;
    char op;

    printf("Inserisci un numero:\n");
    scanf(" %d", &n1);
    printf("Inserisci un' operazione:\n");
    scanf(" %c", &op);
    printf("Inserisci un altro numero:\n");
    scanf(" %d", &n2);       
    if (op == '+')
    {
        printf("Risultato: %d\n", n1 + n2);
    }
    else if (op == '-')
    {
        printf("Risultato: %d\n", n1 - n2);
    }
    else if (op == '*')
    {
        printf("Risultato: %d\n", n1 * n2);
    }
    else if (op == '/')
    {
        printf("Risultato: %d\n", n1 / n2);
    }
    else 
    {
        printf("Carattere errato\n");
    }
    
}


int main()
{
    calcolo();
    return(0);
}