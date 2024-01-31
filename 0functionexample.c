#include <stdio.h>

void Cubo()
{
    int numero;
    int cubo;

    printf("Inserisci un numero:\n");
    scanf(" %d", &numero);
    cubo = numero * numero * numero;
    printf("Il cubo di %d è: %d\n", numero,cubo); 
}
void Quadrato()
{
    int numero;
    int quadrato;

    printf("Inserisci un numero:\n");
    scanf(" %d", &numero);
    quadrato = numero * numero;
    printf("Il quadrato di %d è: %d\n", numero,quadrato);
}



int main()
{
    Quadrato();
    Cubo();
    return(0);
}