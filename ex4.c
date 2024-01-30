#include <stdio.h>

int main()
{
    int etaminima;
    int eta;

    printf("Inserisci l'età minima per avere la patente nel tuo stato:\n");
    scanf(" %d", &etaminima);
    printf("\nInserisci la tua età:\n");
    scanf(" %d", &eta);
    if (eta >= etaminima)
    {
        printf("\nPuoi prendere la patente\n");
    } 
    else {
        printf("\nNon puoi prendere la patente\n");
    }
    return(0);
}