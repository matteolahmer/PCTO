#include <stdio.h>

int main()
{
    int n1;
    int n2;
    int resto;

    printf("Inserisci un numero:\n");
    scanf(" %d", &n1);
    printf("Inserisci un altro numero:\n");
    scanf(" %d", &n2);
    resto = n1 % n2;
    if (resto == 0){
        printf("Il primo numero è multiplo del secondo\n");
    } 
    else {
        printf("Il primo numero non è multiplo del secondo\n");
    }
    return(0);
}