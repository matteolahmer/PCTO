#include <stdio.h>

void carattere()
{
    char c;
    printf("Inserisci una lettera:\n");
    scanf(" %c", &c);
    if ((c >= 97 && c <= 122) || c >= 65 && c <= 91)
    {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            printf("La tua lettera è una vocale\n");
        }
            else
            {
                printf("La tua lettera è una consonante\n");
            }           
    }
    else
    {
        printf("La tua lettera non è valida\n");
    }
}


int main()
{
    carattere();
    return(0);
}