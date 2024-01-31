#include <stdio.h>

void carattere()
{
    char c;
    printf("Inserisci un carattere:\n");
    scanf(" %c", &c);
    if ((c >= 97 && c <= 122) || c >= 65 && c <= 91)
    {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            printf("Il tuo carattere è una vocale\n");
        }
            else
            {
                printf("Il tuo carattere è una consonante\n");
            }           
    }
    else
    {
        printf("Il tuo carattere non è valido\n");
    }
}


int main()
{
    carattere();
    return(0);
}