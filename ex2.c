#include <stdio.h>

int main()
{  
    int numero;
    int numero2;
    int numero3;
    int numero4;
    int numero5;
    int risultato;
    printf("Prima età:\n");
    scanf(" %d", &numero);
    printf("Seconda età:\n");
    scanf(" %d", &numero2);
    printf("Terza età:\n");
    scanf(" %d", &numero3);
    printf("Quarta età:\n");
    scanf(" %d", &numero4);
    printf("Quinta età:\n");
    scanf(" %d", &numero5);
    printf("Operazione: %d + %d + %d + %d + %d\n", numero, numero2, numero3, numero4, numero5);
    risultato = numero + numero2 + numero3 + numero4 + numero5;
    printf("Risultato: %d\n", risultato);
    return(0);
}

    /*int numero;
    float numero2;
    char carattere;
    float risultato;
    printf("Scegli un numero intero:\n");
    scanf(" %d", &numero);
    printf("Il tuo numero intero è: %d\n", numero);
    printf("\nScegli un numero decimale da addizionare:\n");
    scanf(" %f", &numero2);  
    printf("Il tuo numero decimale è: %.1f\n", numero2); 
    risultato = numero + numero2;
    printf("\nRisultato:\n%.1f\n", risultato);
    printf("\nScegli un carattere:\n");    
    scanf(" %c", &carattere);  
    printf("Il tuo carattere è: %c\n", carattere);
    return(0);*/