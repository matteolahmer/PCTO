#include <stdio.h>
#include <unistd.h>

int a()
{
    printf("test1\n");
}

int b()
{
    printf("test2\n");
}






int main()
{
    int selezione = 0;

    printf("\nBenvenuto nella startup... Seleziona un'opzione:\n1) Verifica a\n2) Verifica b\n");
    scanf(" %d", &selezione);
    if(selezione == 1)
    {
        a();
    }
    else if (selezione == 2)
    {
        b();
    }
    else
    {
        printf("Opzione non valida\n");
        main();
    }
    
}