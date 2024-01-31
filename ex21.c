#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main()
{
    int numero = 0;
    int punti = 0;
    int random;   

    while(numero >= 0)
    {   
        srand(time(NULL));
        printf("Inserisci un numero tra 0 e 10:\n");
        scanf(" %d", &numero);
        random = rand() % 11;
        if(numero >= 0 && numero <= 10)
        {
            if (numero == random)
    {
        printf("Numero indovinato!\n");
        punti = punti + 1;
        printf("Punti: %d\n\n", punti);
    } 
    else
    {
        printf("Numero sbagliato! Il numero era: %d\n", random);
        printf("Punti: %d\n\n", punti);
    }
    }
    sleep(1);
    }
    printf("\nChiusura del gioco...\n");
    return(0);
}