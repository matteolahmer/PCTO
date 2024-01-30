#include <stdio.h>

int main()
{
    int eta;

    printf("Inserisci la tua età:\n");
    scanf(" %d", &eta);
    if (eta >= 18)
    {
        printf("\nSei maggiorenne\n");
    } 
    else
    {
        printf("\nSei minorenne\n");
    }
    return(0);
}