#include <stdio.h>

int main()
{
    float C;
    float F;
    float K;

    printf("Inserisci una temperatura in Celsius\n");
    scanf(" %f", &C);
 if (C >= -273.15)
 {
    F = 1.8 * C + 32;
    K = C + 273.15; 
    printf("\nLa tua temperatura inserita equivale a:\n");
    printf("%.1f Fahrenheit\n", F);
    printf("%.1f Kelvin\n", K);
 } 
 else 
 {
    printf("\nERRORE: La temperatura inserita è minore dello zero assoluto\n");
 }

    return(0);
}