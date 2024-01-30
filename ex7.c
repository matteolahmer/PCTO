#include <stdio.h>

int main()
{
    int n1;
    int n2;
    int n3;

    printf("Inserisci 3 numeri, invia uno alla volta\n");
    scanf(" %d",&n1);
    scanf(" %d",&n2);
    scanf(" %d",&n3);        
    if (n2-n1 == n3-n2)
    {
        printf("I numeri sono in progressione aritmetica\n");
    } 
    else {
        printf("I numeri non sono in progressione aritmetica\n");
    }
    return(0);
}