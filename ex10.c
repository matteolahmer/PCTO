#include <stdio.h>

int main()
{
    int l1;
    int l2;
    int l3;
    
    printf("Inserisci 3 lunghezze, invia una alla volta\n");
    scanf(" %d",&l1);
    scanf(" %d",&l2);
    scanf(" %d",&l3);
    if(l1 + l2 > l3 && l2 + l3 > l1 && l3 + l1 > l2)
    {
        if (l1 == 0 || l2 == 0 || l3 == 0)
        {
            printf("Il triangolo non è valido\n");
        }
        else if (l1 == l2 && l2 == l3)
        {
            printf("Il triangolo è equilatero\n");
        } 
        else if (l1 == l2 || l2 == l3 || l3 == l1)
        {
            printf("Il triangolo è isoscele\n");
        } 
        else if (l1 != l2 && l2 != l3)
        {
            printf("Il triangolo è scaleno\n");
        }
    } 
    else
    {
        printf("Questi 3 numeri non possono essere le lunghezze dei lati di un triangolo\n");
    }
    
    return(0);
}