#include <stdio.h>

int main()
{
    int x;
    int y;
    
    printf("Inserisci una coordinata x:\n");
    scanf(" %d", &x);
    printf("Inserisci una coordinata y:\n");
    scanf(" %d", &y);
    if(x > 0 && y > 0)
    {
        printf("Ti trovi nel primo quadrante\n");
    }
    else if(x > 0 && y < 0)
    {
        printf("Ti trovi nel quarto quadrante\n");
    }
    else if(x < 0 && y < 0)
    {
        printf("Ti trovi nel terzo quadrante\n");
    }
    else if(x < 0 && y > 0)
    {
        printf("Ti trovi nel secondo quadrante\n");
    }
    else if((x == 0 && y != 0) || (y == 0 && x != 0))
    {
        printf("Non ti trovi in un quadrante.\n");
    }
    else if(x == 0 && y == 0)
    {
        printf("Ti trovi nel punto O.\n");
    }
}