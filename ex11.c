#include <stdio.h>

int main()
{
    int anno;
    int annidiff;
    
    printf("Inserisci il tuo anno di nascita:\n");
    scanf(" %d", &anno);
    if (anno == 1969)
    {
        printf("Sei nato nello stesso anno in cui l'uomo è andato sulla luna!\n");
    } 
    else if (anno < 1969)
    {
        annidiff = 1969 - anno;
        printf("Sei nato %d anno/i prima dell'anno del primo uomo sulla luna!\n", annidiff);
    } 
    else if (anno > 1969)
    {
        annidiff = anno - 1969;
        printf("Sei nato %d anno/i dopo l'anno del primo uomo sulla luna\n", annidiff);
    } 
    
    return(0);
}