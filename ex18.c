#include <stdio.h>

int main()
{
    int pezzi = 0;
    int totale;
    int sconto;

    while(pezzi >= 0)
    {
    printf("Quanti pezzi vuoi acquistare?\n");
    scanf(" %d", &pezzi);
    if(pezzi > 0){
        totale = pezzi * 5;
        if (pezzi >= 30 && pezzi <50)
    {
        sconto = totale * 10 / 100;
        totale = totale - sconto;
        printf("Prezzo totale: %d\n", totale);        
    }
        else if (pezzi >= 50)
    {
        sconto = totale * 15 / 100;
        totale = totale - sconto;
        printf("Prezzo totale: %d\n", totale);       
    }
        else
    {       
        printf("Prezzo totale: %d\n", totale);
    }
                 
    }  
    }
   
    printf("Errore\n");
    return(0);
}