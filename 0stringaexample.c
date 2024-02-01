#include <stdio.h>

int main()
{
    int array[5] = {5,6,8,2,42};
    char stringa[5] = {'c','i','a','o','\0'};
    char stringa2[] = "ciao";
    char stringascan[100];
    printf("%d\n", array[3]);
    array[1] = 18;
    printf("%d\n", array[1]);
    printf("%s\n", stringa);
    printf("Inserisci una frase\n");
    scanf("%s", stringascan);
    printf("%s\n", stringascan);
}