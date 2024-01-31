#include <stdio.h>

int main()
{
    int n1 = 0;
    int numeri = 0;
    float media = 0;

    while (n1 >= 0)
    {   printf("Inserisci un numero:\n");
        scanf(" %d", &n1);
        if (n1 > 0)
        {
            numeri = numeri + 1;
            media = media + n1;
        }
    }
    media = media / numeri;
    printf("Media dei numeri inseriti: %.1f\n", media);



    return(0);
}